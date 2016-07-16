/*
Define your own versions of the TextQuery and QueryResult classes and 
execute the runQueries function from § 12.3.1 (p. 486).
*/

#ifndef CH12_EX30_H
#define CH12_EX30_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include <map>
#include <set>

using line_num = std::vector<std::string>::size_type;

class QueryResult;
class TextQuery {
public:
	TextQuery(std::ifstream &ifs) : lines(new std::vector<std::string>) {
		std::string line;
		while (getline(ifs, line)){
			lines->push_back(line);
			std::istringstream iss(line);
			std::string word;
			while (iss >> word) {
				auto &line_records = wm[word];
				if (!line_records) {
					line_records.reset(new std::set<line_num>);
				}
				line_records->insert(lines->size() - 1);
			}
		}
	}

	QueryResult query(const std::string &s) const;

private:
	std::shared_ptr<std::vector<std::string>> lines;
	std::map<std::string, std::shared_ptr<std::set<line_num>>> wm;
};

std::ostream& print(std::ostream &out, const QueryResult &qr);

class QueryResult {	
	friend std::ostream& print(std::ostream &out, const QueryResult &qr);
public:
	QueryResult(std::string s, std::shared_ptr<std::set<line_num>> r, std::shared_ptr<std::vector<std::string>> l):
	search(s), line_records(r), lines(l) {

	}
private:
	std::string search;
	std::shared_ptr<std::set<line_num>> line_records;	
	std::shared_ptr<std::vector<std::string>> lines;
};


QueryResult TextQuery::query(const std::string &s) const {
	static std::shared_ptr<std::set<line_num>> nodata(new std::set<line_num>);
	auto entry = wm.find(s);
	if (entry != wm.end()){
		return QueryResult(s, entry->second, lines);
	} else {
		return QueryResult(s, nodata, lines);
	}
}

std::ostream& print(std::ostream &out, const QueryResult &qr) {
	out << "Found " << qr.line_records->size() << " results:" << std::endl;
	for (auto num : *(qr.line_records)){
		out << "\t (line " << (num + 1) << ") " << qr.lines->at(num) << std::endl;
	}
	return out;

}
#endif
/*
Rewrite the first exercise to use a lambda (§ 10.3.2, p. 388) in place of the end_connection function.
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

struct Connection {

};

int main(int argc, char const *argv[])
{
	Connection conn;
	shared_ptr<Connection> cptr(&conn, [](Connection *c) {
		// close connection
	});
	return 0;
}
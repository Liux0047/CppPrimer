/*
Write your own version of a function that uses a shared_ptr to manage a connection.
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

struct Connection {

};

void end_conn(Connection *c) {
	// close connection
}

int main(int argc, char const *argv[])
{
	Connection conn;
	shared_ptr<Connection> cptr(&conn, end_conn);
	return 0;
}
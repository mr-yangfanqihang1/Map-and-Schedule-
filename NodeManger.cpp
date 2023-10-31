#include "NodeManger.h"

std::vector<Node> nodeList;
int nnode = 0;

NodeManger::NodeManger()
{
	rc = sqlite3_open("school.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		exit(0);
	}
}


NodeManger::~NodeManger() {
	sqlite3_close(db);
}



void NodeManger::get_nodes()
{
	rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	
}

#include "EdgeManger.h"

std::vector<Edge> edgeList;

EdgeManger::EdgeManger(){

	rc = sqlite3_open("school.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		exit(0);
	}
	
}

EdgeManger::~EdgeManger()
{
	sqlite3_close(db);
}

void EdgeManger::get_edges()
{

	rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}


}

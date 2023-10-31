#ifndef _EDGEMANGER_H_
#define _EDGEMANGER_H_


#include <iostream>
#include <string>
#include <vector>
#include "Edge.h"
#include <sqlite3.h>
#include <stdlib.h>

extern std::vector<Edge> edgeList;

class EdgeManger {
	EdgeManger();
	~EdgeManger();
public:
	static EdgeManger* GetInstance() //µ¥ÀýÄ£Ê½
	{
		static EdgeManger EdgeManger;
		return &EdgeManger;
	}
	void get_edges();
private:
	
	static int callback(void* data, int argc, char** argv, char** azColName) {
		Edge e;
		e.set_from(atoi(argv[1]));
		e.set_to(atoi(argv[2]));
		e.set_len(atoi(argv[3]));
		e.set_isOnlyWalking(atoi(argv[4]));
		edgeList.push_back(e);
		return 0;
	}
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	const char* sql = "SELECT * from edges";
	const char* data = "Callback function called";
};


#endif
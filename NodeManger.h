#ifndef _NODEMANGER_H_
#define _NODEMANGER_H_

#include <iostream>
#include <string>
#include <vector>
#include "Node.h"
#include <sqlite3.h>
#include <stdlib.h>
#include "Public.h"

extern std::vector<Node> nodeList;
extern int nnode;

class NodeManger{
	NodeManger();
	~NodeManger();

public:
	static NodeManger* GetInstance() //µ¥ÀýÄ£Ê½
	{
		static NodeManger NodeManger;
		return &NodeManger;
	}
	
	void get_nodes();
private:

	static int callback(void* data, int argc, char** argv, char** azColName) {
		Node n;
		n.set_idx(atoi(argv[0]));
		//n.set_name(argv[1]);
		n.set_name(" ");
		n.set_x(atoi(argv[2]));
		n.set_y(atoi(argv[3]));
		nodeList.push_back(n);
		nnode++;
		return 0;
	}
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	const char* sql = "SELECT * from nodes";
	const char* data = "Callback function called";

};

#endif
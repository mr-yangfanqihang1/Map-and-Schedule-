#pragma once
#include <vector>
#include <iostream>
#include "Node.h"


class Answer
{
public:
	Answer();
	void set_path(std::vector<Node> path);
	void set_totaldist(int totaldist);
	void set_totaltime(double totaltime);
	void print();
    int get_totaldist();
    double get_totaltime();
    std::vector<Node> get_path();
private:
	std::vector<Node> path;
	int totaldist;
	double totaltime;
	
};


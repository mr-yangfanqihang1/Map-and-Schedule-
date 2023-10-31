#include "Answer.h"

Answer::Answer():totaldist{0},totaltime{0}{}

void Answer::set_path(std::vector<Node> path)
{
	this->path = path;
}

void Answer::set_totaldist(int totaldist)
{
	this->totaldist = totaldist;
}

void Answer::set_totaltime(double totaltime)
{
	this->totaltime = totaltime;
}

void Answer::print()
{
	for (std::vector<Node>::iterator it = path.begin(); it != path.end(); it++) {
		it->print();
	}
	std::cout << "totaldist: " << totaldist << std::endl;
	std::cout << "totaltime: " << totaltime << std::endl;
}


int Answer::get_totaldist(){
    return totaldist;
}

double Answer::get_totaltime(){
    return totaltime;
}

std::vector<Node> Answer::get_path(){
    return path;
}

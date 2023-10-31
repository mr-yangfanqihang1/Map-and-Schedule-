#ifndef _EDGE_H_
#define _EDGE_H_
#include "Public.h"
#include <iostream>

class Edge {
    int from;
    int to;
    int len;
    int isOnlyWalking;
    double get_time_Walking();
    double get_time_Riding();
public:
    Edge();
    Edge(int to_, int len_, int isOnlyWalking_);
    int get_from();
    int get_to();
    int get_len();
    int get_isOnlyWalking();
    double get_time();

    void set_from(int from_);
    void set_to(int to_);
    void set_len(int len_);
    void set_isOnlyWalking(int isOnlyWalking);

    void print() {
        std::cout << from << " " << to << " " << len << " " << isOnlyWalking << std::endl;
    }
};

#endif 

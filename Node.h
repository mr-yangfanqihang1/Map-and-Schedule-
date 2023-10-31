#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>

class Node {
public:
    Node();
    Node(int idx, std::string name, int x, int y);
    int get_idx();
    std::string get_name();
    int get_x();
    int get_y();
    void set_idx(int idx);
    void set_name(std::string name);
    void set_x(int x);
    void set_y(int y);
    void print();

private:
    int x, y;
    std::string name;
    int idx;
};

#endif

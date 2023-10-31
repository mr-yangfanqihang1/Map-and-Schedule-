#include "node.h"

Node::Node():Node(0," ",0,0)
{
}

Node::Node(int idx, std::string name, int x, int y) {
    this->idx = idx;
    this->name = name;
    this->x = x;
    this->y = y;

}

int Node::get_idx() {
    return idx;
}

std::string Node::get_name()
{
    return name;
}

int Node::get_x()
{
    return x;
}

int Node::get_y()
{
    return y;
}

void Node::set_idx(int idx)
{
    this->idx = idx;

}

void Node::set_name(std::string name)
{
    this->name = name;

}

void Node::set_x(int x)
{
    this->x = x;
}

void Node::set_y(int y)
{
    this->y = y;
}

void Node::print()
{
    std::cout << idx << " " << name << " " << x << " " << y << std::endl;
}


#include "Edge.h"

Edge::Edge() {
    len = 0x3f3f3f3f;
};

Edge::Edge(int to_, int len_, int isOnlyWalking_) :to{ to_ }, len{ len_ }, isOnlyWalking{ isOnlyWalking_ } {}

int Edge::get_from()
{
    return from;
}

int Edge::get_to() {
    return to;
}

int Edge::get_len() {
    return len;
}

double Edge::get_time_Walking() {
    return len / vw;
}

double Edge::get_time_Riding() {
    return len / vr;
}

double Edge::get_time() {
    double ret = this->get_time_Walking();
    if (!(this->get_isOnlyWalking()) && !flag_Walking) {
        ret = this->get_time_Riding();
    }
    return ret;
}

int Edge::get_isOnlyWalking() {
    return isOnlyWalking;
}

void Edge::set_from(int from_)
{
    from = from_;
}


void Edge::set_to(int to_) {
    to = to_;
}
void Edge::set_len(int len_) {
    len = len_;
}

void Edge::set_isOnlyWalking(int isOnlyWalking_) {
    isOnlyWalking = isOnlyWalking_;
}
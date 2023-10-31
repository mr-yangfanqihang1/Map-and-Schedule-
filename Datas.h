#ifndef _DATAS_H_
#define _DATAS_H_

#include <map>
#include <iostream>
#include <vector>
#include "Node.h"
using std::string;

class Datas {
private:
    std::map<string, int> m;
public:
    Datas() = default;
    Datas(int n);
    int getValue(string s);
    std::string getKey(int t);
};



#endif // _DATAS_H_
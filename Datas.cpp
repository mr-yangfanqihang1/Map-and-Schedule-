#include "Datas.h"

// Datas::Datas(int n){
//     this->nodeNum = n;
// }

Datas::Datas(int n) {
    std::string name;
    int idx;
    std::vector<Node> nodes;

    for (int i = 0; i < n; i++) {
        std::cin >> name >> idx;
        m[name] = idx;
    }
}

int Datas::getValue(string s) {
    std::map<string, int>::iterator it = m.find(s);
    return it->second;
}

std::string Datas::getKey(int t) {
    std::string ret;
    for (std::map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second == t) {
            ret = it->first;
            break;
        }
    }
    return ret;
}
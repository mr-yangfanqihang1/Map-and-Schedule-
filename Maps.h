#ifndef _MAPS_H_
#define _MAPS_H_

#include "classWidget.h"
#include <iostream>
#include <string.h>
#include "Public.h"
#include "Node.h"
#include "Edge.h"
#include "Datas.h"
#include <stack>
#include <vector>
#include "EdgeManger.h"
#include "NodeManger.h"
#include "Answer.h"

#define MAXN 200



class Maps {
    Maps();
public:
    static Maps* GetInstance() {
        static Maps Maps{};
        return &Maps;
    }
    
    void init();
    void add_edge(int from, int to, int len, bool isOnlyWalking);

    Answer dij_dist(int st, int ed, int n = nnode);
    Answer dij_time(int st, int ed, int n = nnode);


private:
    
    std::vector<Edge> edges[MAXN * 2];
    std::vector<Node> n0;
    Node node[MAXN];
    int cnt = 0;
    int nodeNum;
    const int INF = 0x3f3f3f3f;
};
#endif




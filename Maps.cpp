#include "Maps.h"





Maps::Maps()
{
    this->init();
}

void Maps::init() {
    NodeManger::GetInstance()->get_nodes();
    n0 = nodeList;
    std::vector<Edge> v0;
    EdgeManger::GetInstance()->get_edges();
    v0 = edgeList;
    
   
    for (std::vector<Edge>::iterator it = v0.begin(); it != v0.end(); it++) {
        int a = it->get_from();
        int b = it->get_to();
        int d = it->get_len();
        int isOnlyWalking_ = it->get_isOnlyWalking();
        this->add_edge(a, b, d, isOnlyWalking_);
        this->add_edge(b, a, d, isOnlyWalking_);
    }


}

void Maps::add_edge(int from, int to, int len, bool isOnlyWalking) {
    Edge tmpEdge{ to,len,isOnlyWalking };
    edges[from].push_back(tmpEdge);
}

Answer Maps::dij_dist(int st, int ed, int n)   //最短路径 起点，终点，节点数
{
    cnt = 0;
    int dist[MAXN], vis[MAXN], former[MAXN];
    memset(dist, 0x3f, sizeof(dist));
    memset(vis, 0, sizeof(vis));
    memset(former, -1, sizeof(former));
    int flag = st;
    dist[st] = 0;
    while (flag != ed) {
        int mindist = INF;
        vis[flag] = 1;
        for (std::vector<Edge>::iterator it = edges[flag].begin(); it != edges[flag].end(); it++) {
            if (dist[it->get_to()] > dist[flag] + it->get_len()) {
                dist[it->get_to()] = dist[flag] + it->get_len();
                former[it->get_to()] = flag;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && (dist[i] < mindist)) {
                mindist = dist[i];
                flag = i;
            }
        }
    }


    std::stack<int> s1;
    int i = ed;
    while (i != -1) {
        s1.push(i);
        i = former[i];
    };

    int total_dist = 0;
    double total_time = 0;
    std::vector<Node> path;
    while (!s1.empty()) {
        int t = s1.top();
        s1.pop();
        for (std::vector<Node>::iterator it = n0.begin(); it != n0.end(); it++) {
            if (it->get_idx() == t) {
                path.push_back(*it);
            }
        }
        
        if (s1.empty()) {
            break;
        }
        
        for (std::vector<Edge>::iterator it = edges[t].begin(); it != edges[t].end(); it++) {
            if (it->get_to() == s1.top()) {
                total_dist += it->get_len();
                total_time += it->get_time();
                break;
            }
        }
    }
    Answer a;
    a.set_path(path);
    a.set_totaldist(total_dist);
    a.set_totaltime(total_time);
    return a;
}


Answer Maps::dij_time(int st, int ed, int n ) {

    cnt = 0;
    const double MAXTIME = 10000;
    int vis[MAXN], former[MAXN];
    double time[MAXN] = { 0 };
    for (int i = 0; i < MAXN; i++) {
        time[i] = MAXTIME;
    }
    memset(vis, 0, sizeof(vis));
    memset(former, -1, sizeof(former));
    int flag = st;
    time[st] = 0;
    while (flag != ed) {
        double mintime = MAXTIME;
        vis[flag] = 1;
        for (std::vector<Edge>::iterator it = edges[flag].begin(); it != edges[flag].end(); it++) {
            if (time[it->get_to()] > time[flag] + it->get_time()) {
                time[it->get_to()] = time[flag] + it->get_time();
                former[it->get_to()] = flag;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && (time[i] < mintime)) {
                mintime = time[i];
                flag = i;
            }
        }
    }

    //int t = ed;
    std::stack<int> s1;
    int i = ed;
    while (i != -1) {
        s1.push(i);
        i = former[i];
    };

    int total_dist = 0;
    double total_time = 0;
    std::vector<Node> path;
    while (!s1.empty()) {
        int t = s1.top();
        s1.pop();
        for (std::vector<Node>::iterator it = n0.begin(); it != n0.end(); it++) {
            if (it->get_idx() == t) {
                path.push_back(*it);
            }
        }

        if (s1.empty()) {
            break;
        }

        for (std::vector<Edge>::iterator it = edges[t].begin(); it != edges[t].end(); it++) {
            if (it->get_to() == s1.top()) {
                total_dist += it->get_len();
                total_time += it->get_time();
                break;
            }
        }
    }
    Answer a;
    a.set_path(path);
    a.set_totaldist(total_dist);
    a.set_totaltime(total_time);

    return a;
}


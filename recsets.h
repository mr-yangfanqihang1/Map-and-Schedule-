#ifndef RECSETS_H
#define RECSETS_H
#include<rec.h>
#include<vector>
using std::vector;
class recsets{
private:
    int f1,f2;
public:
    recsets();
    recsets(int a1,int a2);
    vector<int> getrecsets();
};

#endif // RECSETS_H

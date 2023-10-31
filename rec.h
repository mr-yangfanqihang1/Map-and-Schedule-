#ifndef REC_H
#define REC_H


class rec
{
private:
    int x;
    int y;
    int length;
    int width;
public:
    rec();
    rec(int x0,int y0,int length0,int width0);
    int getx();
    int gety();
    int getlength();
    int getwidth();
};

#endif // REC_H

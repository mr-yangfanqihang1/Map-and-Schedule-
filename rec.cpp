#include "rec.h"

rec::rec(){};
rec::rec(int x0,int y0,int length0,int width0){
    x=x0;
    y=y0;
    length=length0;
    width=width0;
}
int rec::getx(){
    return x;
}
int rec::gety(){
    return y;
}
int rec::getlength(){
    return length;
}
int rec::getwidth(){
    return width;
}

#ifndef _NAVIGATION_H_
#define _NAVIGATION_H_


#include <iostream>
#include <string.h>
#include "node.h"
#include "Edge.h"
#include "Maps.h"
#include "Datas.h"
#include "public.h"

class Navigation{
	

public:
	Navigation(int mode, int flag_Walking);
	static Navigation* GetInstance(int mode,int flag_Walking)  //��һ��������Ѱ·��ʽ���ڶ����ǳ��з�ʽ
	{
		Navigation Navigation{mode, flag_Walking };
		return &Navigation;
	}
	void setMode(int mode);
	void setFlag_walking(int flag_walking);
	Answer search(int st, int ed);
private:

};


#endif


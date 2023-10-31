#include "Navigation.h"

Navigation::Navigation(int mode_, int flag_Walking_) {
	flag_Walking = flag_Walking_;
	mode = mode_;
}

void Navigation::setMode(int mode_)
{
	mode = mode_;
}

void Navigation::setFlag_walking(int flag_Walking_)
{
	flag_Walking = flag_Walking_;
}

Answer Navigation::search(int st, int ed) {
	Answer a1;
	if (mode) {
		a1 = Maps::GetInstance()->dij_time(st, ed);
	}else {
		a1 = Maps::GetInstance()->dij_dist(st, ed);
	}
	return a1;
}

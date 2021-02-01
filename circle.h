#pragma once    //防止头文件重复包含
#include <iostream>
#include "point.h"
using namespace std;
class circle
{

public:
	void set_R(int R);
	int get_R();
	void set_Center(Point P);
	Point get_Center();
private:
	int m_R;
	Point m_Center;
};

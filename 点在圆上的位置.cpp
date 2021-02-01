#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;
void isInCircle(circle &c, Point &p)
{	
	int distance = (c.get_Center().getx() - p.getx()) * (c.get_Center().getx() - p.getx()) + (c.get_Center().gety() - p.gety()) * (c.get_Center().gety() - p.gety());
	int rDistance = c.get_R()*c.get_R();

	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;

	}
	else cout << "����Բ��" << endl;
}



int main()
{
	//����Բ
	circle c;
	c.set_R(10);
	Point center;
	center.setx(10);
	center.sety(0);
	c.set_Center(center);
	//������
	Point p;
	p.setx(10);
	p.sety(10);
	isInCircle(c, p);

	system("pause");
	return 0;
}
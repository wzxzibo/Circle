#include "circle.h"
void circle::set_R(int R)
{
	m_R = R;
}
int circle::get_R()
{
	return m_R;
}
void circle::set_Center(Point P)
{
	m_Center = P;
}
Point circle::get_Center()
{
	return m_Center;
}
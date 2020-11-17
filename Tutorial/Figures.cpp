#include"Figures.h"

void Point2D::Set(double x, double y)
{
	this->X = x;
	this->Y = y;
}

void Point2D::Move(double dX,double dY)
{
	this->X+=dX;
	this->Y+=dY;
}

void Point2D::Scale(double sX,double sY)
{
	this->X*=sX;
	this->Y*=sY;
}


void Circle::Set(double Xo,double Yo, double radius)
{
	this->center(Xo,Yo);
	this->radius = radius<0? 0:radius;
}

void Circle::Move(double dX,double dY)
{
	this->center.Move(dX,dY);
}

double Circle::Area()
{
	return PI*(this->radius*this->radius);
}

double Circle::Perimeter()
{
	return 2*PI*this->radius;
}

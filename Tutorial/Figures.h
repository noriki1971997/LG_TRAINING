#ifndef _FIGURES_H
#define _FIGURES_H

#define PI 3.14
class Point2D
{
	double X,Y;
	public:
		void Set(double x,double y);
		void Move(double dX,double dY);
		void Scale(double sX,double sY);	
};

class Circle
{
	Point2D center;
	double radius;
	
	public: 
		void Set(double Xo,double Yo, double radius);
		void Move(double dX,double dY);
		double Area();
		double Perimeter();
};

#endif

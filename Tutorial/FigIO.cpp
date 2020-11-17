#include"FigIO.h"

istream &operator >> (istream& inDevice,Circle& cir)
{
	double Xo,Yo,r;
	cir.Set(Xo,Yo,r);
	inDevice >> Xo >> Yo >> r;
	return inDevice;
}

ostream& operator << (ostream& outDevice,Circle& cir)
{
	outDevice <<"+ Area: "<<cir.Area()<<endl;
	outDevice <<"+ Perimeter: "<<cir.Perimeter()<<endl;
	return outDevice;
}

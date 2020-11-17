#include <iostream>
#include "Figures.h"
#include "FigIO.h"
using namespace std;

void inputCircleData(istream &inDevice, Circle& cir)
{
	double Xo,Yo,r;
	inDevice >> Xo >> Yo >> r;
	cir.Set(Xo,Yo,r);
}

void outputCircleData(ostream &outDevice, Circle& cir)
{
	outDevice <<"+ Area: "<<cir.Area()<<endl;
	outDevice <<"+ Perimeter: "<<cir.Perimeter()<<endl;
}

void testCase_2()
{
	Circle Cir;

	cout<<"Input center and radius"<<endl;
	inputCircleData(cin,Cir);
	outputCircleData(cout,Cir);
}

void testCase_3()
{
	Circle Cir;
	cin>>Cir;
	cout<<Cir;
}


int main(int argc, char** argv) {
	

	testCase_3();
	
	
	return 0;
}

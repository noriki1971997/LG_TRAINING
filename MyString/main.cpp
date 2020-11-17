#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	string str1("Hello");
	string str2 = "World";
	
	string str3 = str1 + str2;
	
	cout<<"String : "<<str3<<endl;
	cout<<"length of string: "<<str3.length()<<endl;
	cout<<"Firtst character: "<<str3[0]<<endl;
	cout<<"Last character: "<<str3[str3.length() - 1]<<endl;
	return 0;
}

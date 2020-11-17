#include <iostream>
#include<vector>
using namespace std;


istream& operator >> (istream& inDev, vector<float>& vec)
{
	float temp;
	cout<<"input vector"<<endl;
	while(inDev >> temp)
	{
		vec.push_back(temp);
	}
	return inDev;
}

ostream& operator << (ostream& outDev, vector<float>& vec)
{
	int i = 0;
	cout<<"print vector"<<endl;
	while(i < vec.size())
	{
		cout<<"a["<<i<<"] = "<<vec[i]<<endl;
		i++;
	}
	return outDev;
}

void testCase()
{
	int n;
	vector<float> vecA;
	float temp;
	
	cout<<"Input length of array: ";
	cin>>n;
	
	for(int i = 0;i < n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin >> temp;
		vecA.push_back(temp);
	}
	
	for(int i = 0;i < n;i++)
	{
		cout<<"a["<<i<<"] = "<<vecA[i]<<endl;
	}
}




int main(int argc, char** argv) {
	
	vector<float> vecA;
	cin>>vecA;
	cout<<vecA;
	
	
	return 0;
}

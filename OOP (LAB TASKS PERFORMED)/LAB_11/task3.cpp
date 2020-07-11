#include<iostream>
using namespace std;

template <class x,class y> void add(x a,y b)
{
	y result;
	result=a+b;
	cout<<"ADDITION OF INTEGER AND DOUBLE: "<<result;
}
template <class x> void addstring(x a, x b)
{
	string y,z,result;
	y=a;
	z=b;
	result=y+z;
	cout<<"\nADDITION OF STRINGS: "<<result;
}

int main()
{
	
	add<int,double>(10,0.23);
    addstring("Now","Then");
	return 0;
}

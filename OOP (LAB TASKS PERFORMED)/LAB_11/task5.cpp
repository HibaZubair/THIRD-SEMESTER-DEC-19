#include<iostream>
using namespace std;
//template function is overloaded on the basis of number of arguments
template <class x> void multiply(x a,x b)
{
	x result;
	result=a*b;
	cout<<"MUTIPLICATION OF TWO NUMBERS: "<<result;
}
template <class x> void multiply(x a,x b,x c)
{
	x result;
	result=a*b;
	result=result*c;
	cout<<"\nMUTIPLICATION OF TWO NUMBERS: "<<result;
}
int main()
{
	multiply(2,4);
	multiply(2.0,3.0,4.0);
	return 0;
}

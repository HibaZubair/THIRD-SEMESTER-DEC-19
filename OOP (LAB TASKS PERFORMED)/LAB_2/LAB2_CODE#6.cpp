#include<iostream>
using namespace std;
void swap(int *ptr1, int *ptr2);
int main()
{
	int a,  b, *ptr1, *ptr2;
	cout<<"Enter first value a: "<<endl;
	cin>>a;
	cout<<endl<<"Enter second value b:"<<endl;
	cin>>b;
	ptr1=&a;
	ptr2=&b;
	swap(ptr1, ptr2);
	cout<<endl<<"Swaped values are: "<<endl<<"a: "<<a<<endl<<"b: "<<b;
	
}
void swap(int *ptr1, int *ptr2)
{
	int l;
	l= *ptr2;
	*ptr2=*ptr1;
	*ptr1=l;
	
}

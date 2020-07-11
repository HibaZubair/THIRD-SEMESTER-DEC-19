#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		A(int a)
		{
			this->a=a;
		}
		friend void compare(A obj1,B obj2);
};
class B:pubic class A
{
	int b;
	public:
		B(int b)
		{
			this->b=b;
		}
		friend void compare(A obj1, B obj2);
};
void compare(A obj1, B obj2)
{
	if(obj1.a >obj2.b )
	{
		cout<<"hello";
	}
	else
{
	cout<<"bye";
	}	
}
int main()
{
	A obj1(9);
	B obj2(4);
	
}

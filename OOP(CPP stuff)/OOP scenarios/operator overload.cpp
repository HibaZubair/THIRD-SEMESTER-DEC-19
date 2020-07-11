#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A(int x=0,int y=0)
		{
			a=x;
			b=y;
		}
		
	friend ostream & operator <<(ostream &out,const A  & obj);
	friend istream & operator >>(istream &in, A &obj);
};
ostream & operator <<(ostream &out, const A &obj)
{
	out<<obj.a;
	out<<endl;
	out<<obj.b;
	return out;
}
istream & operator >>(istream &in,A &obj)
{
	cout<<"\nENTER a: ";
	in>>obj.a;
	cout<<"\nEnter b: ";
	in>>obj.b;
	return in; 
}
int main()
{
	A obj1;
	cin>>obj1;
	cout<<endl<<endl<<obj1;
	return 0;
}

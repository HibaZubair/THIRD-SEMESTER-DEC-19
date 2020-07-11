#include<iostream>
using namespace std;
class a
{
	public:
	virtual void check()=0;
};
class b:public a
{
	int x,y;
	public:
		void check()
		{
			x=1;
			y=1;
			x=x+y;
			cout<<y;
		}
};
int main()
{
	a *p;

	p=new b();
	p->check();

}

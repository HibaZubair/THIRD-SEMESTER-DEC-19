//shallow copy
#include<iostream>
using namespace std;
class dummy
{
	int a, b,c;
	public:
		void set(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void show()
		{
			cout<<endl<<a<<endl<<b<<endl<<c;
		}
};
int main()
{
	dummy obj1;
	obj1.set(1,2,3);
	dummy obj2=obj1;
	obj2.show();
}


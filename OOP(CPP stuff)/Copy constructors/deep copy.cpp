//deep copy example integers
#include<iostream>
using namespace std;
class dummy
{
	int a, b, *ptr;
	
	public:
		dummy()
		{
			ptr=new int;
		}
			dummy (const dummy &obj)
		{
			a=obj.a;
			b=obj.b;
			ptr=new int;
			*ptr=*(obj.ptr);
		}

		void set(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			*ptr=c;
		}
		void show()
		{
			cout<<endl<<a<<endl<<b<<endl<<*ptr;
		}
		~dummy()
		{
			delete ptr;
		}
	};
int main()
{
	dummy obj1;
	obj1.set(1,2,3);
	
	dummy obj2(obj1);
	obj2.show();
}


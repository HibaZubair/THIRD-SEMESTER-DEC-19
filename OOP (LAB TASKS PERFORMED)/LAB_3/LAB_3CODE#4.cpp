#include<iostream>
using namespace std;
class countertype
{
	int counter;
	
		public:
			static int count;
			void setcounter(int count)
			{
				counter=count;
			}
			
			void inc()
			{
				++count;
			}
			void dec()
			{
				--count;
			}
			int getcount()
			{
				return count;
			}
			int display()
			{
				cout<<"Current count value = "<<count;
			}
};
int countertype::count=0;
int main()
{
	countertype ob;
	int i, j;
	for(i=0;i<6;i++)
	{
		ob.inc();
		ob.getcount();
	}
		for(i=0;i<2;i++)
	{
		ob.dec();
		ob.getcount();
	}
	ob.display();
	
	
	
	
	
	  
	}
	

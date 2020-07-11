#include<iostream>
using namespace std;
class distances
{
	int val;
	public:
	distances()
	{
		val=0;
	}
	void setval(int val)
	{
		this->val=val;
	}
	int getval()
	{
		return val;
	}
	void feet()
	{
		float feet;
		feet=val*3.28;
		cout<<endl<<"VALUE IN FEET= "<<feet;
	}
	void inches()
	{
		float inch;
		inch=val*39.37;
		cout<<endl<<"VALUE IN INCHES= "<<inch;
	}
	void display()
	{
		cout<<endl<<"VALUE IN METERS= "<<val;
	}
	~distances()
	{
		cout<<endl<<"OBJECT HAS BEEN DESTROYED";	
	}
};
int main()
{
	int val;
	cout<<"ENTER VALUE IN METERS: ";
	cin>>val;
	distances ob;
	ob.setval(val);
	ob.feet();
	ob.inches();
	ob.display();
}









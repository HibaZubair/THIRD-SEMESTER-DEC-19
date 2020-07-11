//QUESTION 1:PART(a)
#include<iostream>
using namespace std;
class rectangle
{
	public:
	double length, width;
	void setl(double length)
	{
		this->length=length;
	}
	void setw(double width)
	{
		this->width=width;
	}
	double getl()
	{
		return length;
	}
	double getw()
	{
		return width;
	}
	void display()
	{
		cout<<endl<<"LENGTH OF RECTANGLE: "<<length<<endl<<"WIDTH OF RECTANGLE: "<<width;
	}
};
class block:public rectangle
{
   	double height;
   	public:
   	void seth(double height)
   	{
   		this->height=height;
	}
	double geth()
	{
		return height;
	}
	void display()
	{
	  cout<<endl<<"LENGTH OF BLOCK: "<<length;
	  cout<<endl<<"WIDTH OF BLOCK: "<<width;
	  cout<<endl<<"HEGHT OF BLOCK: "<<height;	
	}
};
int main()
{
	double l, w, h;
	rectangle obj1;
	block obj2;
	obj1.setl(24);
	obj1.setw(12);
	obj2.setl(11);
	obj2.setw(22.0);
	obj2.seth(33);
	obj1.display();
	obj2.display();
	return 0;
	
	
}














#include<iostream>
using namespace std;
int main()
{
	int a,h;
	cout<<"Enter amount: ";
	cin>>a;
	if(a/100!=0)
	{
		h=a/100;
		cout<<"100 rupee notes= "<<h<<endl;
		h=h*100;
		a=a-h;
	}

	if(a/50!=0)
	{
		h=a/50;
		cout<<"50 rupee notes= "<<h<<endl;
		h=h*50;
		a=a-h;
	}
	
	if(a/20!=0)
	{
		h=a/20;
		cout<<"20 rupee notes= "<<h<<endl;
		h=h*20;
		a=a-h;
	}
	if(a/10!=0)
	{
		h=a/10;
		cout<<"10 rupee notes= "<<h<<endl;
		h=h*10;
		a=a-h;
	}
	if(a/5!=0)
	{
		h=a/5;
		cout<<"5 rupee notes= "<<h<<endl;
		h=h*5;
		a=a-h;
	}

	if(a/2!=0)
	{
		h=a/2;
		cout<<"2 rupee notes= "<<h<<endl;
		h=h*50;
		a=a-h;
	}
	if(a/1==1)
	{
		h=a;
		cout<<"1 rupee notes= "<<h<<endl;
	}
}
	
	
	
	
	


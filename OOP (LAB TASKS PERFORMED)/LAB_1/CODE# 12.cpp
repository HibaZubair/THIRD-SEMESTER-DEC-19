#include<iostream>
using namespace std;
int main()
{
	int h, c, t;
	
	cout<<"GRADE OF STEEL";
	cout<<endl<<"Hardness: ";
	cin>>h;
	cout<<endl<<"Carbon content: ";
	cin>>c;
	cout<<endl<<"Tensile strength: ";
	cin>>t;
	cout<<"Your steel grade is ";
	if(h>50 && c<70 && t>5600)
	{
		cout<<"10";
		exit(1);
	}
	if(h>50 && c<70)
	{
		cout<<"9";
		exit(1);
	}
	if(c<70 && t>5600)
	{
		cout<<"8";
		exit(1);
	}
	if(h>50 && t>5600)
	{
		cout<<"7";
		exit(1);
	}
	if(h>50 || c<70 || t>5600)
	{
		cout<<"6";
		exit(1);
	}
	if(h<50 && c>70 && t<5600)
	{
		cout<<"5";
		exit(1);
	}
	
	
	
}

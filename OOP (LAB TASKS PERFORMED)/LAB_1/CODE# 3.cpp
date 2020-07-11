#include<iostream>
void swap(float &x, float &y);
using namespace std;
int main()
{
	float x, y;
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
	swap(x, y);
	cout<<"After swaping"<<endl<<"x = "<<x<<endl<<"y = "<<y;
}
void swap(float &x, float &y)
{
	float d;
	d=y;
	y=x;
	x=d;
    
	
}

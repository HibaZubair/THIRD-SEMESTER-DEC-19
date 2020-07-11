#include<iostream>
using namespace std;
int main()
{
	int c, g, ans=1, i;
	cout<<"How many guests you have coming over: ";
	cin>>g;
	cout<<"How many chairs you have: ";
	cin>>c;
	for(i=0;i<c;i++)
	{
		ans=ans*g;
		g--;
	}
	cout<<"The possibilty of "<<g<<" guests in "<<c<<" chairs is: "<<ans;
	
}

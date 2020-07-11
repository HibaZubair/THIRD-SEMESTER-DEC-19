#include<iostream>
void avg(float arr1[], float arr2[]);
using namespace std;
int main()
{
	float arr1[12]; int i;
	float arr2[8];
	cout<<"Enter 12 numbers: "<<endl;
	for(i=0;i<12;i++)
	{
		cin>>arr1[i];
	}
	avg(arr1, arr2);
	cout<<"Average of the numbers is: ";
	for(i=0;i<12;i++)
	{
		cout<<" "<<arr2[i];
	}
	
}
void avg(float arr1[], float arr2[])
{
	
	int i;
	for(i=0; i<9; i++)
	{
		arr2[i]=(arr1[i]+arr1[i+1]+arr1[i+2]+arr1[i+3])/4;
	}
	
}


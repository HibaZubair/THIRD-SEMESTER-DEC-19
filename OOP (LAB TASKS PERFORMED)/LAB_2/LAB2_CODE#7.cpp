#include<iostream>
#include<cmath>
using namespace std;
void mean(int arr[], float *ptr);
int main()
{
	int arr[10], i; float *ptr ,s;
	ptr=&s;
	cout<<"Enter 10 integers"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	mean(arr, ptr);
	cout<<endl<<"Standard deviation: "<<s;
	return 0;
}
void mean(int arr[], float *ptr)
{
	int sum, sum1, i;
	float mean, a, sqr, ans;
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	mean=sum/10;
	for(i=0;i<10;i++)
	{
		sum1+=pow(arr[i] - mean, 2);
	}	
	sum1=sum1/10;
	*ptr=sqrt(ans);
	
}

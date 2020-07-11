#include<iostream>
int sum(int n ,int arr);
using namespace std;
int main()
{
	int n, i, sol;
	cout<<"Enter the size of an array ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements\n ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sol=sum(n,arr[n]);
	cout<<sol;
return 0;
}
int sum(int n,int arr[n])
{
	int ans=0; 
	int i=0;
		for(i=0;i<n;i++)
	{
		ans=ans+arr[i];
	}
	cout<<"The sum of the elements is = "<<ans;
	return ans;
}


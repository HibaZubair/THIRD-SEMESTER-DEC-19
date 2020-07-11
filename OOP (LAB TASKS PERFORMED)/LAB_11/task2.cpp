#include<iostream>
using namespace std;

template <class T>
void func (T a[],int n)
{
	T temp;
     int i;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0; j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout <<"Sorted Array is : ";
	for (int i=0;i<n;i++)
	{
		cout << a[i] <<" ";
	}
}
int main ()
{
	int n,x;
	cout <<"Enter Data Type \n1.Integer\n2.Float\n";
	cin >> x;
	if (x==1)
	{
	cout << "Enter size of array\n";
	cin >> n;
	int arr[n];
	cout << "Enter Elements of array\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	func(arr,n);	
	}
	else if (x==2)
	{
		cout << "Enter number of Elements\n";
	cin >> n;
	float arr1[n];
	cout << "Enter Elements\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	func(arr1,n);
	}
	else {
		cout << "Wrong Input\n";
		exit(0);
	}
}

#include<iostream>
using namespace std;

template <class T>
class A{
	T s;
	int j;
	public:
		
		A(){
			s=0;
		    j=0;
		}
		
		T sum(T a[],T n)
		{
		    while(j!=n)
		    {
		    	s+=a[j];
		    	j++;
			}
			return s;
		}
};
int main ()
{
	int x,n;
	
	cout <<"Enter Data Type \n1.Integer\n2.Double\n";
	cin >> x;
	if(x==1)
	{
		A<int> ob1;
		cout << "Enter size of array\n";
		cin >> n;
		int arr[n];
		cout << "Enter Elements\n";
		for (int i=0;i<n;i++)
		{
			cin >> arr[i];
			
		}
		cout << "Sum Is : "<<ob1.sum(arr,n)<<endl;
	}
	else if (x==2)
	{
		A<double> ob2;
		cout << "Enter size of array\n";
		cin >> n;
		double arr[n];
		cout << "Enter Elements\n";
		for (int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		cout << "Sum Is : "<<ob2.sum(arr,n)<<endl;
	}
	else {
		cout <<"you entered the wrong input\n";
	}
}

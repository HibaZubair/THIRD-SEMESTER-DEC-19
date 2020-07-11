#include<iostream>
#include<math.h>
using namespace std;
int recur(int num, int a);
int main()
{
	int num, a=0, ans;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<< recur(num, 0)<<endl;
	return 0;
}
int recur(int num,int a)
{
	if(num==0)
		return a; 
	a*=10;
	a+=num%10;
	return recur(num/10,a); 
}

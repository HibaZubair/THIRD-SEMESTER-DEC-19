#include<iostream>
int digit(int num);
using namespace std;
int main()
{
	int num, ans;
	cout<<"INPUT: ";
	cin>>num;
	ans=digit(num);
	cout<<endl<<ans;
	
}

int digit(int num)
{int count=0;

	if (num!=0)
	{
		++count;
		return 1 + digit(num/10);
    }
	else
	{
		return count;
	}
}

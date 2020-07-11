#include<iostream>
using namespace std;
int main(void)
{
	int p=0, rec=1, pr=0, i;
	for(i=0;i<7;i++)
	
	{
		p=pr+rec;
		cout<<p;
		pr=p;
		p=p+rec;
		cout<<" "<<p<<" ";
		rec=p;
		
	}
}

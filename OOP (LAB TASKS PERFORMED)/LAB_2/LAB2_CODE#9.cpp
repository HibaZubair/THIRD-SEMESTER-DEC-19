#include<iostream>
using namespace std;
void food_per_day(int data[3][7], float day[]);
void lessamount(int data[3][7]);
void maxx(int data[3][7]);
int main()
{
	int data[3][7],least, i, j;
	float day[7];
	cout<<"Enter amount of food eaten by each of the three pandas for a week";
	for(i=0; i<3; i++)
	{
		cout<<endl<<"For panda "<<i+1<<endl;
		for(j=0;j<6;j++)
		{
			cin>>data[i][j];
		}
	}
	food_per_day(data, day);
	for(i=0; i<3; i++)
	{
		cout<<endl<<"Average for panda "<<i<<": "<<endl;
		for(j=0;j<6;j++)
		{
			cout<<endl<<day[i];
		}
	}
	lessamount(data);
	maxx(data);
}
void food_per_day(int data[3][7], float day[])
{
	int i, j, inc=2;
	for(i=0; i<7; i++)
	{
		for(j=0;j<3;j++)
		{
			day[i]=day[i]+data[j][i];
		     if(j==inc)
		     {
		     	day[i]=day[i]/3;
		     	inc++;
			 }
		}
		
	}
	
}
void lessamount(int data[3][7])
{int sum1, sum2, sum3, i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0;j<7;j++)
		{
		   if(i==0)
		   {
		   	sum1=sum1+data[i][j];
		   }
		   if(i==1)
		   {
		   	sum2=sum2+data[i][j];
		   }
		   if(i==2)
		   {
		   sum3=sum3+data[i][j];
		}
	}	}
	if(sum1<sum2 && sum1<sum3)
	{
		cout<<endl<<"Panda 1 has eaten the least food during the week";
	}
	if(sum2<sum1 && sum2<sum3)
	{
		cout<<endl<<"Panda 2 has eaten the least food during the week";
	}
	if(sum3<sum2 && sum3<sum1)
	{
		cout<<endl<<"Panda 3 has eaten the least food during the week";
	}	
}
void maxx(int data[3][7])
	{int i, j, sum1, sum2, sum3;	
    for(i=0; i<3; i++)
	{
		for(j=0;j<7;j++)
		{		   if(i==0)
		   {
		   	sum1=sum1+data[i][j];
		   }
		   if(i==1)
		   {
		   	sum2=sum2+data[i][j];
		   }
		   if(i==2)
		   {
		   sum3=sum3+data[i][j];
		}
	}
}
	if(sum1>sum2 && sum1>sum3)
	{
		cout<<endl<<"Panda 1 has eaten the most food during the week";
	}
	if(sum2>sum1 && sum2>sum3)
	{
		cout<<endl<<"Panda 2 has eaten the most food during the week";
	}
	if(sum3>sum2 && sum3>sum1)
	{
		cout<<endl<<"Panda 3 has eaten the most food during the week";
	}	}

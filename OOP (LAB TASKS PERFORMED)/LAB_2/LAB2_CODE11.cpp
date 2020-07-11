#include<iostream>
using namespace std;
void calculateCharges(float h[], float c[]);
int main()
{
  float h[3], c[3], t,t1; 
  int i;
  //inputs
  
  cout<<"Enter hours you parked your car: "<<endl;
  
  for(i=0;i<3;i++)
  {
  	cout<<"Customer "<<i+1<<": ";
  	cin>>h[i];
  	t=t+h[i];
  }	
  calculateCharges(h, c);
  cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charge"<<endl;
    for(i=0;i<3;i++)
  {
  	cout<<endl<<i+1<<"\t"<<h[i]<<"\t"<<c[i];
  }	
  for(i=0;i<3;i++)
  {
  	t1=t1+c[i];
  }
  cout<<endl<<"TOTAL"<<"\t"<<t<<"\t"<<t1;
}
void calculateCharges(float h[], float c[])
{
	int i; float d;
	 for(i=0;i<3;i++)
  {
  	if(h[i]<=3)
  	{
  		c[i]=20;
	  }
	  if(h[i]>3)
	  {
	  	d=h[i]-3;
	  	c[i]=20+(d*5);
	  }
	  if(h[i]==24)
	  {
	  	c[i]=100;
	  }
   }	
}

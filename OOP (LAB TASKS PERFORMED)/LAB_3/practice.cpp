#include<iostream>
using namespace std;
class rectangle
{
	float l, w;
	public:
	void setval(float ll)
	{
		
		if(ll<0.0 || ll>20.0)
		{
			cout<<"Error";
		}
		else
		{
			l=ll;
		}
	}
	float getval()
	{
		return l;
	}
	void setval2(float w)
	{
		this->w=w;
	}
	float getval2()
	{
		return w;
	}
	void peri()
	{
		float peri=l+l+w+w;
		cout<<"\nPERIMETER: "<<peri;
	}
	
};



int main()
{
	float l, b;
	
	cin>> l;
	rectangle ob;
	ob.setval(l);
	cout<<ob.getval();
	cin>>b;
	ob.setval2(b);
	cout<<ob.getval2();
	ob.peri();
	return 0;
	
	
	
	
	
}















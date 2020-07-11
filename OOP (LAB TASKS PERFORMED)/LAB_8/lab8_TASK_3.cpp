#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		time()
		{
			
		}
		time(int hr, int min, int sec)
		{
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
	
	time operator + (time &ob)
	{
		time temp;
		temp.hr=hr+ob.hr;
		temp.min=min+ob.min;
		temp.sec=sec+ob.sec;
		return temp;
	}
	void show()
	
	{
		cout<<endl<<"AFTER ADDITION OVERLOADING: "<<endl<<"hr: "<<hr;
		cout<<endl<<"min: "<<min;
		cout<<endl<<"sec: "<<sec;
	}
bool operator < (const time &ob)
    {
    	if(ob.hr > this->hr)
    	{
    		
    	cout<<ob.hr<<" : "<<ob.min<<" : "<<ob.sec<<" is late ";	
    	
		}
		else
		{
			cout<<ob.hr<<" : "<<ob.min<<" : "<<ob.sec<<" is ahead";		
		}
	}
	void display()
	{
		if(hr>24)
		{
			hr=hr-24;
		}
		if(min>60)
		{
			hr++;
		}
		if(sec>60)
		{
			min++;
		}
		cout<<hr<<" : "<<min<<" : "<<sec<<endl;
		}	
		

	
};
int main()
{
	time obj1(1,2,3);
	time obj2(4,5,6);
	obj1.display();
	obj2.display();
	time obj3;
	obj3=obj1+obj2;
	obj3.display();
	obj1<obj2;
}

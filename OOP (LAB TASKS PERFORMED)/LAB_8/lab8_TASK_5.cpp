//HIBA ZUBAIR
//k18-1361
//task 5
#include<iostream>
using namespace std;
class numdays
{
	int hr;
	float result;
	public:
		numdays()
		{
			
		}
		numdays(int hr)
		{
			this->hr=hr;
		}
		
//sum of number of hours of individual objects
	numdays operator + (numdays  &ob)
	{
		numdays temp;
		temp.hr=hr+ob.hr;
		return temp;
	}
//display of sum of number of hours of individual objects
	void displayadd()
	{
		cout<<endl<<"SUM OF HOURS OF TWO OBJECT: "<<hr;
	}
	//days
	void sumdays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER SUM (DAYS): "<<result;
	}
//result of subtraction of number of hours in two objects
		numdays operator - (numdays  &ob)
	{
		numdays temp;
		temp.hr=hr-ob.hr;
		return temp;
	}
//display of result of subtraction of number of hours of individual objects
	void displaysub()
	{
		cout<<endl<<"SUBTRACTION OF HOURS OF TWO OBJECTS: "<<hr;
	}
	//days
	void subdays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER SUBTRACTION (DAYS): "<<result;
	}
//prefix increment overloading
numdays operator ++ ()
	{
		numdays temp;
		temp.hr=++hr;
		return temp;
	}
//display
	void displaypreinc()
	{
		cout<<endl<<"PRE INCREMENT OF AN OBJECT: "<<hr;
	}
	//days
	void predays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER PRE-INCREMENT (DAYS): "<<result;
	}
//postfix incrementoverloading	
	numdays operator ++ (int)
	{
		numdays temp;
		temp.hr=hr++;
		return temp;
	}
//display
	void displaypostinc()
	{
		cout<<endl<<"POST-INCREMENT OF AN OBJECT: "<<hr;
	}
	//days
	void postdays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER POST-INCREMENT (DAYS): "<<result;
	}
	//prefix decrement overloading
numdays operator -- ()
	{
		numdays temp;
		temp.hr=--hr;
		return temp;
	}
//display
	void displaysubpreinc()
	{
		cout<<endl<<"PRE-DECREMENT OF AN OBJECT: "<<hr;
	}
	//days
	void presubdays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER PRE-DECREMENT (DAYS): "<<result;
	}
//postfix decrement overloading	
	numdays operator -- (int)
	{
		numdays temp;
		temp.hr=hr--;
		return temp;
	}
//display
	void displaysubpostinc()
	{
		cout<<endl<<"POST-DECREMENT OF AN OBJECT: "<<hr;
	}
	//days
	void postsubdays()
	{
		result=hr/8;
		cout<<endl<<"RESULT AFTER POST-DECREMENT (DAYS): "<<result;
	}
};
int main()
{
	numdays obj1(20);
	numdays obj2(20);
	numdays obj3=obj1+obj2;
    obj3.displayadd();
    obj3.sumdays();
    obj3=obj1-obj2;
    obj3.displaysub();
    obj3.subdays();
    obj3=++obj1;
    obj3.displaypreinc();
    obj3.predays();
    obj3=obj1++;
    obj3.displaypreinc();
    obj3.postdays();
    obj3=--obj2;
    obj3.displaysubpreinc();
    obj3.presubdays();
    obj3=obj2--;
    obj3.displaysubpostinc();
    obj3.postsubdays();
}

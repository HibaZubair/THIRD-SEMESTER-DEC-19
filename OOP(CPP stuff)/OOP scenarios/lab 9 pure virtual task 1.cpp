#include<iostream>
using namespace std;
class person
{
   protected:
   	string name;
   public:
   	void putname(string n)
   	{
   		name=n;
	}
	string getname()
	{
		return name;
	}
   virtual void getdata()=0;
   virtual bool isoutstanding()=0;	
};
class student:public person
{
	float gpa;
	public:
	void getdata()
	{
		cout<<"\nEnter your GPA: ";
		cin>>gpa;
	}
	bool isoutstanding()
	{
		if(gpa>3.5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class professor:public person
{
	int pub;
	public:
	void getdata()
	{
		cout<<"\nEnter publications: ";
		cin>>pub;
	}
	bool isoutstanding()
	{
		if(pub>100)
		{
			return true;
		}
		else
		{
			return false;
		}
	}	
};
int main()
{
	bool a;
	char choice;
	string n;
	cout<<"Insert data of student or professor: ";
	cin>>choice;
	if(choice=='s')
	{
		cout<<"\nEnter name: ";
		cin>>n;
		student obj;
		obj.putname(n);
		cout<<endl<<obj.getname();
		obj.getdata();
		a=obj.isoutstanding();
		if(a==true)
		{
			cout<<"\nGPA higher than 3.5";
		}
		else
		{
			cout<<"\nLower work hard";
		}
	}
	else
	{
		
		cout<<"\nEnter name: ";
		cin>>n;
		professor obj;
		obj.putname(n);
		obj.putname(n);
		cout<<endl<<obj.getname();
		obj.getdata();
		a=obj.isoutstanding();
		if(a==true)
		{
			cout<<"\nmore than 100 pubs";
		}
		else
		{
			cout<<"\nLower work hard";
		}
		
	}
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	char *name;
	string lname;
	int salary;
	public:
		void setval(char *n, string lname, int salary)
		{
			name=n;
			this->lname=lname;
			this->salary=salary;
		}
		void getfname()
		{
			cout<<"\nFIRST NAME: "<<name;
			
		}
		void getlastname()
		{
			cout<<"\nLAST NAME: "<<lname;
			
		}
		 getsalar()
		{
			float sal;
			sal=salary*1.1;
			cout<<"\nSALARY: "<<sal;
			
		
		}
};
int main()
{
	int size, i, salary;
	string lname;
	cout<<"\nENTER SIZE OF FIRST NAME: ";
	cin>>size;
	char *ptr;
	char fn[size];
	ptr=fn;
	cout<<"\nFIRST NAME: ";
	for(i=0;i<size;i++)
	{
		cin>>*(ptr+ i);
	}
	cout<<"\nLAST NAME: ";
	cin>>lname;
	cout<<"\nMONTHLY SALARY: ";
	cin>>salary;
	if(salary<0)
	{
		salary=0;
	}
	system ("cls");
	cout<<"\nEMPLOYEE ONE DATA:\n";
	employee ob1;
	ob1.setval(fn, lname, salary*12);
	ob1.getfname();
	ob1.getlastname();
	ob1.getsalar();
	
	employee ob2;
	ob2.setval(fn, lname, salary*12);
	ob2.getfname();
	ob2.getlastname();
	ob2.getsalar();
}
























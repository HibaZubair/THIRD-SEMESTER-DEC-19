#include <iostream>
#include<string.h>
using namespace std;
class bank
{
	char name[100], address[100];
	int age, contact, pin;
	float openingb;
	float cbal;
	public:
	void set(float o)
		{
			openingb=o;
		}
		float get()
		{
			return openingb;
		}
	bank(char *n,char *a,int ag,int cont,int p, float cbalance)
	{
		strcpy(name,n);
		strcpy(address, a);
		age=ag;
		pin=p;
		contact=cont;
		cbal=cbalance;
	}
	void deposit();
	void tax();
	void display();
};

void bank::deposit()
{
	float d;
	cout<<"Deposit amount: ";
	cin>>d;
	cbal=openingb+d;
}
void bank::tax()
{
	float tax;
	if(age>=60)
	{
	tax=cbal*0.15;
	cout<<endl<<"After tax current balance: "<<tax;
	}
	if(age<60)
	{
	tax=cbal*0.25;
	cout<<endl<<"After tax current balance: "<<tax;	
	}
}
void bank::display()
{
	cout<<endl<<"Name: "<<name;
	cout<<endl<<"Age: "<<age;
	cout<<endl<<"Address: "<<address;
	cout<<endl<<"PIN: "<<pin;
	//cout<<endl<<"Opening balance: "<<obalance;
	cout<<endl<<"Contact: "<<contact;
	cout<<"Current balance: "<<cbal;
}
int main()
{
    int age, pin, contact;
	float cbal;
	char name[100], address[100];
	cout<<"--------------ENTER DETAILS---------------";
	cout<<endl<<"Name: ";
	cin>>name;
	cout<<endl<<"Age: ";
	cin>>age;
	cout<<endl<<"Address: ";
	cin>>address;
	cout<<endl<<"PIN: ";
	cin>>pin;
    cout<<endl<<"Contact: ";
    cin>>contact;
	cout<<endl<<"Current balance: ";
	cin>>cbal;
	bank b1(name, address, age, contact, pin, cbal);
	b1.set(60000.0);
	cout<<endl<<"Opening balance: "<<b1.get();
	b1.deposit();
	b1.tax();
	b1.display();
	return 0;
}


		
	
		




















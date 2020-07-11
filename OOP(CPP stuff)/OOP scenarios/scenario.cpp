#include<iostream>
#include<stdlib.h>
using namespace std;
class customer
{
	string sname,saddress,rname,raddress,ptype;
	int pweight,discount,cost,s;
	public:
		customer(string sname, string saddress, string rname, string raddress, string ptype, int pweight)
		{
			this->sname=sname;
			this->saddress=saddress;
			this->rname=rname;
			this->raddress=raddress;
			this->ptype=ptype;
			this->pweight=pweight;
		}
	void package()
	{
	    discount=0;
		if(pweight<1 || pweight>5)
		{
			cout<<"\nIncorrect weight of the package";
		}
		if(ptype=="urgent")
		{
			cost=pweight*300;
		}
		if(ptype=="standard")
		{
			cost=pweight*800;
		}
		if(ptype=="budget")
		{
			cost=pweight*150;
		}
	}
	bool discountt(int discount)
	{
		this->discount=discount;
		return true;
	}
	void displayd()
	{
		cout<<"\nDiscount voucher: "<<discount;
	}
	void display()
	{
		system("cls");
		cout<<"Displaying Complete information of your order";
		cout<<"\nSender's name: "<<sname;
		cout<<"\nSender's address: "<<saddress;
		cout<<"\nReceivers name: "<<rname;
		cout<<"\nReciever's address: "<<raddress;
		cout<<"\nPackage type: "<<ptype;
		cout<<"\nPackage weight: "<<pweight;
	}
	void check()
	{
		if(ptype=="urgent" && discount==false )
		{
			cout<<"\nPremier person: "<<sname;
		}
	}
	friend void operator -(customer &o)

	
};
 
int main()
{
	char choice;
	customer obj1("hiba", "b147gulshan", "zoya", "north", "standard", 2);
	
	cout<<"\ndo u have discount voucher?";
	cin>>choice;
	if(choice=='y')
	{
		obj1.discountt(1111);
		obj1.display();
		obj1.displayd();
	}
    else
    {   
    customer obj3;
    obj3=obj1-obj1;
	obj1.display();
	
    }  
	customer obj2("hadiya", "b-147gulshan", "zemil", "defence", "urgent", 2); 
    cout<<"\ndo u have discount voucher?";
	cin>>choice;
	if(choice=='y')
	{
		obj2.discountt(1111);
		obj2.display();
		obj2.displayd();
	}
	else
	{
	obj2.display();
    }
	obj1.check();
	obj2.check();
    

	return 0;
}

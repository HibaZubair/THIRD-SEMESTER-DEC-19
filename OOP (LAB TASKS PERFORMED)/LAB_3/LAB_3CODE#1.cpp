#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	private:
		string name;
		int accnum, balance;
    public:
    	void setval(int balance)
    	{
    		this->balance=balance;
		}
		int getval()
		{
			return balance;
		}
		bank (string name)
		{
			this->name=name;
		}
	int deposit()
	{
		int deposit;
		cout<<endl<<"Deposit: ";
		cin>>deposit;
		balance+=deposit;
		return balance;
	}
	void withdraw()
	{
		int withdraw;
		cout<<endl<<"Withdraw: ";
		cin>>withdraw;
		balance-=withdraw;
	}
	void display()
	{
		cout<<endl<<"Name: "<<name;
		cout<<endl<<"Balance: "<<balance;
	}
};
int main()
{
	string choice, name;
	int ans;
	cout<<"Name: ";
	cin>>name;
	bank ob(name);
	
	ob.setval(10000);//initializing the amount
	
	ans=ob.deposit();
	cout<<"Do you want to check your balance ?"<<endl;
	cin>>choice;
	if(choice =="yes")
	{
		cout<<"Balance after your deposit: "<<ans<<endl;
		cout<<"Do you want to withdraw ?"<<endl;
		cin>>choice;
		if(choice=="yes")
		{
			ob.withdraw();
			ob.display();
		}
		if(choice=="no")
		{
			ob.display();
		}
	}
	else
	{
		ob.display();
	}
	
	
	
	
	
	return 0;
}

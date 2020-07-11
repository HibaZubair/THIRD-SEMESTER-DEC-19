#include<iostream>
using namespace std;

class Account
{
	protected :
		int balance;
	public :
		Account(int x= 0)
		{
			balance = x;
		}
			void checkbalance()
		{
			cout<<"Current Balance:"<<balance<<endl;
		}
		void deposit( int x)
		{
			balance=balance+ x;
		}
		void withdraw( int x)
		{
			balance=balance-x;
		}
	
};

class Interest : virtual public Account
{
	private :
		int interest;
	public :
		Interest(int t=0)
		{
			interest = t;
		}
		void deposit(int t)
		{
			balance=balance+t;
     		balance=balance+(balance*0.3);
		}
};

class Charging : virtual public Account
{
	private :
		int fee;
	public :
	Charging( int t = 0)
	{
			fee = t;
	}
	void withdraw(float t)
	{
	 balance=balance-3;
		balance=balance-t;
	}
};

class ACI :public Interest, public Charging
{
	void transfer(int t, Account &a)
	{
	   balance=balance+ t;
	}
	void transfer(int t, Interest &a)
	{
	balance= balance + t;
	}
	void transfer(int t,Charging &a)
	{
		balance=balance+ t;
	}
};

int main()
{	cout<<"Account info:"<<endl;
	Account a(100000);
	a.checkbalance();
	a.deposit(900);
	cout<<"After deposit"<<endl;
	a.checkbalance();
	a.withdraw(7000);
	cout<<"After withdrawl:"<<endl;
	a.checkbalance();
	cout<<"After interest is applied"<<endl;
	Interest b;
	b.deposit(89000);
	cout<<"After deposit"<<endl;
	b.checkbalance();
	b.withdraw(7800);
	cout<<"After withdrawl:"<<endl;
	b.checkbalance();
	cout<<"After charging"<<endl;
	Charging c;
	c.deposit(6704);
	cout<<"After deposit"<<endl;
	c.checkbalance();
	c.withdraw(564);
	cout<<"After withdrawl:"<<endl;
	c.checkbalance();
  return 0;
}


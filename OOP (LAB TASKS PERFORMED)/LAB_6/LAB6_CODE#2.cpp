#include<iostream>
#include<string.h>
using namespace std;
class book
{
	public:
	string title, author;
	void sett(string t)
	{
		title=t;
	}
	void seta(string a)
	{
		author=a;
	}
	void display()
	{
		cout<<endl<<"TITLE: "<<title<<endl<<"AUTHOR: "<<author;
	}
};
class fiction:public book
{
	int rl; //rl=reading level
	public:
		void setrl(int rl)
		{
			this->rl=rl;
		}
		void display()
		{
			cout<<endl<<"FICTION::NUMERIC GRADE READING LEVEL= "<<rl;
		}
};
class nonfiction:public book
{
	int nopg; //nop=number of pages
	public:
		void setnop(int nop)
		{
			nopg=nop;
		}
		void display()
		{
			
			cout<<endl<<"NON-FICTION::NUMBER OF PAGES= "<<nopg;
		}
};
int main()
{
	book obj1;
	fiction obj2;
	nonfiction obj3;
	obj1.seta("FAMOUS FIVE");
	obj1.sett("ENID BLYTON");
	obj2.setrl(3);
	obj3.setnop(250);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}


















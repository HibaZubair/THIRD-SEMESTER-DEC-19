#include<iostream>
#include<string.h>
using namespace std;
class musicalcomposition
{
	public:
	string title, composer;
	int year;
	musicalcomposition(string title, string composer, int year )
	{
		this->title=title;
		this->composer=composer;
		this->year=year;
	}
	void display()
	{
		cout<<endl<<"TITLE: "<<title<<endl<<"COMPOSER: "<<composer;
		cout<<endl<<"YEAR: "<<year;
	}
};
class nationalanthem:public musicalcomposition
{
	string nation;
	public:
	nationalanthem(string na)
	{
		nation=na;
	}
	void display()
	{
		cout<<endl<<"ANTHEM's NATION': "<<nation;
	}
};
int main()
{
musicalcomposition obj1("ANIMALS","MARTIN GARRIX",2013);
nationalanthem obj2("COLUMBIA");

return 0;	
}








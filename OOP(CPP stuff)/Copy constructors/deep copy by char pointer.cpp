//deep copy using char array(string) without constant
//iss mein constant use kerna zaroori hai werna "deprecated(means disapproved) conversion from string constant to char*" error dey ga
//iss ka matlab ha we are tring to convert string literal to char* which is generally not poosible without an explicit cast
//You can convert a const char[] to const char* because the array decays to the pointer, but what you are doing is making a mutable a constant.
#include<iostream>
#include<cstring>
using namespace std;
class dummy
{
	

	char *str;
	int size;
	public:
		dummy()
		{
		}
		dummy(const char *s );
	 
		void change(const char *s);
		dummy(const dummy &obj);
		void display()
		{
			cout<<str;
		}
~dummy()
{
	delete []str;
}

};
dummy::dummy(const char *s )
	{
			size=strlen(s);
			str=new char[size];
			strcpy(str,s);
    }
void dummy::change(const char *s)
{
	delete []str;
	size=strlen(s);
	str=new char[size+1];
	strcpy(str,s);
}
dummy::dummy(const dummy &obj)
{
	size=obj.size;
	str=new char[size];
	strcpy(str,obj.str);
}

int main()
{
	dummy obj1("Hiba");
	dummy obj2(obj1);
	obj2.display();
	return 0;
	}	

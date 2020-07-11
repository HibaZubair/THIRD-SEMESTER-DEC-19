#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class person
{
	int age;
	string name;
	public:
		person(int age,string name)
		{
			this->age=age;
			this->name=name;
		}
		void display()
		{
			cout<<endl<<"NAME: "<<name<<endl<<"AGE: "<<age;
		}
};
int main()
{
	person obj1(19,"Hiba");
	ofstream person1;
	person1.open("Person.bin",ios::out);
	person1.write((char*)&obj1,sizeof(obj1));
	person1.close();
	
	cout<<endl<<"Reading from file: ";
	ifstream rperson1;
	rperson1.open("Person.bin",ios::in);
	rperson1.read((char*)&obj1,sizeof(obj1));
	obj1.display();
	rperson1.close();
	return 0;
	
}

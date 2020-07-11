#include <iostream>
using namespace std;
class Employee
{
	string FirstName;
string LastName;
double salary;
public:
   
Employee(string fName, string lName, double sal)
{
FirstName = fName;
LastName = lName;
salary = sal;
}
 
void show()
{
cout<< "First Name: " <<FirstName<< " Last Name: " <<LastName<< " Salary: " << salary<<endl;
}
void addBonus(double bonus)
{
salary += bonus;
} 
};
class Manager :public Employee
{
public:
Manager(string fName, string lName, double sal, double comm) :Employee(fName, lName, sal)
{
Commision = comm;
}
double Commision; double
getComm()
{
return Commision; 
}
};
int main()
{
Employee* emp; //pointer to base class object
Manager m1("Ali", "Khan", 5000, 0.2); //object of derived class
emp = &m1; //implicit upcasting
emp->show(); //okay because show() is a base class function
return 0;
}

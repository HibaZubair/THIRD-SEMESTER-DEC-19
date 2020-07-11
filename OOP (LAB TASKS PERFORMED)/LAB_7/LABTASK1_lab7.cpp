#include<iostream>
using namespace std;

class employee{
	protected:
	string name;
	string code;	
	public:
		employee(string n,string c)
		{
			name=n;
			code=c;
		}
		

};
class consultant:virtual public employee{
	protected:
	int yearOfExperience;
	public:
		consultant(string n,string c,int yoe):employee(n,c)
		{
			yearOfExperience=yoe;
		}

};

class manager: virtual public employee{
	protected:
	int noOfTeams;
	public:
		manager(string n,string c,int nt):employee(n,c)
		{
			noOfTeams=nt;
		}
};

class consultantManager:public consultant, public manager{
	
	public:
		consultantManager(string n,string c,int yoe,int nt):employee(n,c),consultant( n,c,yoe) , manager( n, c, nt)
		{
		}
		void display()
		{
			cout<<endl;
			cout<<"NAME IS : "<<name<<endl;
			cout<<"CODE IS : "<<code<<endl;
			cout<<"YEAR OF EXPERIENCE IS : "<<yearOfExperience<<endl;
			cout<<"NUMBER OF TEAMS ARE : "<<noOfTeams<<endl;	
		}
};
int main()
{
	consultantManager obj("ali","s-123",17,5);
	obj.display();
	return 0;
}



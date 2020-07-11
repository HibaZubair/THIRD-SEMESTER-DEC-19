#include<iostream>
#include<iostream>
using namespace std;
class student
{
	private:
	string name;
	int id, marks[4];
	float percent;
	public:
		student (string name, int id)
		{
			this->name=name;
			this->id=id;
								
        }
        void setval()
        {int i;
        	cout<<"Enter marks of subjects: "<<endl;
	
		for(i=0;i<4;i++)
    	{
    		cout<<"Subject "<<i+1<<": ";
			cin>>marks[i];
			cout<<endl;
		}
	
		}
    void percentage()
    {
    	int  i;
		float add;
    	for(i=0;i<4;i++)
    	{
    		add=add+marks[i];
		}
		percent=(add/400)*100;

   }
   void display()
   {int i;
   	cout<<"Student name: "<<name<<endl;
   	cout<<"Roll number: "<<id<<endl;
   	cout<<"Marks of subjects: "<<endl;
   	for(i=0;i<4;i++)
   	{cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
   	}
   	cout<<"Total percentage: "<<percent;
   }
};
int main()
{
	string name;
	int id, i, marks[4];
	cout<<"Name: ";
	cin>>name;
	cout<<endl<<"Roll number: ";
	cin>>id;
	
	student ob(name, id);
	ob.setval();
	ob.percentage();
	ob.display();
	
}

























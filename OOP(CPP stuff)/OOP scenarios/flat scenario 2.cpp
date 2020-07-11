#include<iostream>
using namespace std;
class firm
{
	virtual void check()=0;
	
	
};
class office:public firm
{
	float area, profit;
	char tiling;
	public:
		office(float area,char tiling)
		{
			this->area=area;
			this->tiling=tiling;
		}
		void check()
		{
			char choice;
			if(area>120 && tiling=='y')
			{
				cout<<"\nThe contract is not feasible";
			}
			else
			{
				cout<<"\nDo you want to know the profit ?";
				cin>>choice;
				if (choice=='y')
				{
					profit=1;
					profit=area*profit;
					cout<<"\nYour profit is: "<<profit;
				}
				else
				{
					cout<<"\nthat is it !";
				}
			}
		}
		
};
class flat:public firm
{
	int rooms,profit;
	char categ;
	public:
		flat(int rooms,char categ)
		{
			this->rooms=rooms;
			this->categ=categ;
		}
		void check()
		{
			char choice;
			if(rooms>8)
			{
				cout<<"\nThe contract is not feasible";
			}
			else
			{
				cout<<"\nDo you want to know the profit ?";
				cin>>choice;
				if (choice=='y')
				{
					profit=1;
					profit=rooms*profit;
					cout<<"\nYour profit is: "<<profit;
				}
				else
				{
					cout<<"\nthat is it !";
				}
			}
		}
		

};
int main()
{
	char choice,tiling,categ;
	float area;
	int rooms;
	
	cout<<"WANT TO BUILD OFFICE OR FLAT ?";
	cin>>choice;
	if(choice=='o')
	{
		cout<<"\nEnter area in sq.ft: ";
		cin>>area;
		cout<<"\nDo you want tiling: ";
		cin>>tiling;
		office obj(area,tiling);
		obj.check();
	}
	else
	{
		cout<<"\nEnter room number: ";
		cin>>rooms;
		cout<<"\nEnter category: ";
		cin>>categ;
		flat obj(rooms,categ);
	obj.check();
	}
	
	return 0;
}

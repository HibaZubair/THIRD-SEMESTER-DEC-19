#include<iostream>
using namespace std;
class ims //imtiaz supermarket is a long name for class hence used ims;
{
	int itemNumber, quantity;
	double cost, totalcost;
	public:
	ims()
	{
		itemNumber=0;
		quantity=0;
		cost=0;
		totalcost=0;
	}
	// constructor 2
	ims (int itemNumber, int quantity, double cost)
	{
		setitemnumber(itemNumber);
		setQuantity(quantity);
		setCost(cost);
	}
	
    void setitemnumber(int itemNumber)
    {
    	this->itemNumber=itemNumber;
	}
	void setQuantity(int quantity)
	{
		this->quantity=quantity;
	}
	void setCost(double cost)
	{
		this->cost=cost;
	}
    //total cost calculation ka function banay ga
    int getItemNumber()
	{
		return itemNumber;
	} 
	int getQuantity()
	{
		return quantity;
	}
    double getCost()
    {
    	return cost;
	}
	double getTotalCost()
	{
	  totalcost=cost*quantity;
	  return totalcost;
	} 
};
int main()
{
  int itemnumber, quantity;
  double cost;
  cout<<"\tINVENTORY IMTIAZ SUPERMARKET\t" ;
  cout<<endl<<"ITEM NUMBER: ";
  cin>>itemnumber;
  cout<<"QUANTITY: ";
  cin>>quantity;
  cout<<endl<<"COST: ";
  cin>>cost;
  ims ob(itemnumber,quantity,cost);
  system("cls" );
 cout<<endl<<"ITEM NUMBER: "<<ob.getItemNumber();
 cout<<endl<<"QUANTITY: "<<ob.getQuantity();
 cout<<endl<<"COST: "<<ob.getCost();
 cout<<endl<<"TOTAL COST: "<<ob.getTotalCost();
 return 0;
}
















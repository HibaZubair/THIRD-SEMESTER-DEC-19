#include<iostream>
using namespace std;
class Vehicle{
	protected:
		string type;
		string make;
		string model;
		string color;
		int year;
		int miles;
		public:
			Vehicle(string type,string make,string model,string color,int year,int miles)
			{
				this->type=type;
			    this->make=make;
			    this->model=model;
			    this->color=color;
			    this->year=year;
			    this->miles=miles;
			}
			void display()
			{
				cout<<"The Type of the car is "<<type<<endl;
			     cout<<"The Make of the car is "<<make<<endl;
			     cout<<"The Model of the car is "<<model<<endl;
			     cout<<"The Color of the car is "<<color<<endl;
			     cout<<"The Year of the car is "<<year<<endl;
			     cout<<"The Miles driven  "<<miles<<endl;			}
			
};
class GasVehicle:public Vehicle{
	protected:
		int fuel;
		public:
			GasVehicle(string type,string make,string model,string color,int year,int miles,int fuel):Vehicle( type, make, model,color, year, miles)
			{
				this->fuel=fuel;
			}
			void display()
			{
		Vehicle::display();	
				cout<<"The fuel "<<fuel<<endl;
		}
	
};
class ElectricVehicle:virtual public Vehicle{
	protected:
		int estor;
		public:
			ElectricVehicle(string type,string make,string model,string color,int year,int miles,int estor):Vehicle( type, make, model,color, year, miles)
			{
				this->estor=estor;
}
};
class highperformance:public GasVehicle{
	protected:
		int hpower;
		int tspeed;
		public:
			highperformance( string type,string make,string model,string color,int year,int miles,int fuel,int hpower,int tspeed):GasVehicle(type, make, model,color, year, miles,fuel)
{
	this->hpower=hpower;
	this->tspeed=tspeed;
}

};

class Heavy: public ElectricVehicle,public GasVehicle{
	
	protected:
		double weight;
		int noOfwheels;
		int length;
		public:
		Heavy(string type,string make,string model,string color,int year,int miles,int fuel,int estor,double weight,int noOfwheels,int length):ElectricVehicle( type, make, model,color, year, miles,estor),
		GasVehicle( type, make, model,color, year, miles,fuel),Vehicle( type, make, model,color, year, miles)
		{
		
	this->weight=weight;
	this->noOfwheels=noOfwheels;
	this->length=length;
}

void display()
{
	GasVehicle::display();
			
	cout<<"The electrical Storage "<<estor<<endl;
	cout<<"The Weight "<<weight<<endl;
	cout<<"The Number of wheels "<<noOfwheels<<endl;
	cout<<"The Lenght  "<<length<<endl;
}

};
class sportscar: public highperformance{
	protected:
		string gear;
		string drive;
	public:
sportscar( string type,string make,string model,string color,int year,int miles,int fuel,int hpower,int tspeed,string gear,string drive):
highperformance(type,make,model,color,year,miles,fuel,hpower,tspeed){
	this->gear=gear;
	this->drive=drive;
}

};
class constructiontruck: public Heavy{
	protected:
		string cargo;
		public:
constructiontruck(string type,string make,string model,string color,int year,int miles,int fuel,int estor,double weight,int noOfwheels,int length,string cargo):
Heavy(type,make,model,color,year,miles,fuel,estor,weight,noOfwheels,length),
Vehicle(type,make,model,color, year, miles)
{
	this->cargo=cargo;
}		
};

class Bus: public Heavy{
	protected:
		int seats;
		public:
Bus(string type,string make,string model,string color,int year,int miles,int fuel,int estor,double weight,int noOfwheels,int length,int seats):
Heavy(type,make,model,color,year,miles,fuel,estor,weight,noOfwheels,length),Vehicle(type,make,model,color, year, miles){
	this->seats=seats;
}	
void display()
{
	Heavy::display();
	cout<<"Seats "<<seats<<endl;
}
};
int main()
{
	Bus b("Suv","Toyota","2222","black",2019,9000,123,19000,900000,4,90,12);
	b.display();
	return 0;
}


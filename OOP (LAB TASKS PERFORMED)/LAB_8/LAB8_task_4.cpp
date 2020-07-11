#include<iostream>
using namespace std;
class Phonecall{
		string number;
		int length;
		int rate;
		public:
		int get()
			{
		cout<<"Enter number "<<endl;
		cin>>number;
		cout<<"Enter the length "<<endl;
		cin>>length;
		cout<<"Enter the call rate "<<endl;
		cin>>rate;
		this->number=number;
		this->length=length;
		this->rate=rate;
		
		}
			void display()
			{
				cout<<"The number "<<number<<endl;
			cout<<"The length "<<length<<endl;
			cout<<"The rate "<<rate<<endl;
			}
			
			int operator ==( Phonecall ob)
			{
				
			if(number==ob.number &&length==ob.length&&	rate==ob.rate);
			{
		
			return (1);
			}}
	
};

int main()
{

	Phonecall p1[10];
    Phonecall p2[10];	
	for(int i=0;i<3;i++)
	{
	cout<<"enter the "<< i+1 <<" number for object 1"<<endl;
	p1[i].get ();
	
	cout<<"enter the "<< i+1 <<" number for object 2"<<endl;
	p2[i].get();
}
for(int j=0;j<10;j++)

{
	if(p2[j]==p1[j])
	{
		p2[j].display();
	}
}

return 0;
}

#include<iostream>
using namespace std;
class populations
{
	float pop, nob, nod;
	float br, dr;
	public:
	populations (float pop, float nob, float nod)
	{
		this->pop=pop;
		this->nob=nob;
		this->nod=nod;
	}
	float getBirthRate()
	{
		br=nob/pop;
		return br;
	}
		float getDeathRate()
	{
		dr=nod/pop;
		return dr;
	}
};
int main()
{
	float pop, nob, nod;
	cout<<"\tPOPULATION DISRICT PUNJAB\t";
	cout<<endl<<"POPULATION: ";
	cin>>pop;
	cout<<endl<<"ANNUAL NUMBER OF BIRTHS: ";
	cin>>nob;
	cout<<endl<<"ANNUAL NUMBER OF DEATHS: ";
	cin>>nod;
	populations ob(pop,nob,nod);
	cout<<endl<<"BIRTH RATE: "<<ob.getBirthRate();
	cout<<endl<<"DEATH RATE: "<<ob.getDeathRate();
	return 0;
}



























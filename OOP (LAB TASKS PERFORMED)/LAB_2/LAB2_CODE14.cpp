#include<iostream>
using namespace std;
int main()
{
	float marks[7], cgpa, ans;
	int i, d,credit[7];
	cout<<endl<<"Enter grades and credits of the following courses :"<<endl;
	cout<<"English Language: ";
    cin>>marks[0];
    cout<<endl<<"credit hours: ";
    cin>>credit[0];
    cout<<endl<<"Discrete mathematics: ";
    cin>>marks[1];
    cout<<endl<<"credit hours: ";
    cin>>credit[1];
    cout<<endl<<"Pakistan studies: ";
    cin>>marks[2];
    cout<<endl<<"credit hours: ";
    cin>>credit[2];
    cout<<endl<<"Digital logic design: ";
    cin>>marks[3];
    cout<<endl<<"credit hours: ";
    cin>>credit[3];
    cout<<endl<<"Applied physics: ";
    cin>>marks[4];
    cout<<endl<<"credit hours: ";
    cin>>credit[4];
    cout<<endl<<"Applied calculus: ";
    cin>>marks[5];
    cout<<endl<<"credit hours: ";
    cin>>credit[5];
    cout<<endl<<"Psycology: ";
    cin>>marks[6];
    cout<<endl<<"credit hours: ";
    cin>>credit[6];
    for(i=0;i<7;i++)
    {
    	cgpa=cgpa+marks[i];
    	ans=cgpa/7;
			}
	cout<<endl<<"CGPA: "<<ans;
	for(i=0;i<7;i++)
    {
    	d=d+credit[i];
	}
	cout<<endl<<"Total credits: "<<d;
	if(d>=26 && ans>=3.0)
	{
		cout<<endl<<"You are eligible for college thesis";
	}
	else
	{
		cout<<endl<<"You are not eligible for college thesis";
	}
	
}

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

main(){
	
	int b,i=0;
	char name[100];

	
	ofstream ob1;
	
	ob1.open("task.txt");
	cin.getline(name,100);
	
	
	ob1<<"WRITTEN IN FILE: "<<name<<endl;
while(name[i]!='\0')
{
	b++;
	i++;
}
	
	ob1<<endl<<"Length of string: "<<b;
	ob1.close();
	
	ifstream ob2;
	
	char nam;
	ob2.open("task.txt");
	while(ob2)
	{
		nam=ob2.get();
		cout<<nam;
    
	 
}

	ob2.close();
	
}

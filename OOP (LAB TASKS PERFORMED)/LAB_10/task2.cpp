#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream objout;
	ifstream objin;
	char ch;
	 objin.open("task.txt");
	 objin>>ch;
	 objout.open("copy.txt");
	 objin>>ch;
	 objout<<ch;
	 while(!objin.eof())
	 {
	 	if(objout)
		{
		  objin>>ch;
	 	objout<<ch;
	 }}
	 if(objout)
	 {
	 	cout<<endl<<"FILE TEXT COPIED SUCCESSFULLLY ";
	 }
	 objin.close();
	 objout.close();
	 return 0;
}

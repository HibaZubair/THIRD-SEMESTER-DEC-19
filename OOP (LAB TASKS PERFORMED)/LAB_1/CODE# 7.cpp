#include<iostream>
using namespace std;
int main()
{
	int s, i, q, p[4], sum;
	cout<<"The number of snacks you would like to eat: ";
	cin>>s;
	if(s>4)
	{
		cout<<"You cannot choose more than 4 snacks because our menu offers only 4 different kinds"<<endl;
		exit(1);
	}
	char c;
	cout<<"Enter your choice: 'B' for burger, 'F' for french fries, 'P' for pizza and 'S' for sandwiches ";
	for(i=0;i<s;i++)
	{
		cin>>c;
		
		if(c!='s' && c!='f' && c!='p'&& c!='b')
		{
		  
        cout << "Invalid response";
        s++;
	    }
		switch (c)
	{
		case 'b':
			cout<<"Enter quantity of burgers: ";
			cin>>q;
			p[i]=(q*200);
		    break;
		    
		case'f':
		
			cout<<"Enter quantity of french fries: ";
			cin>>q;
			p[i]=(q*50);
		    break;
		    
	    case 'p':
		
			cout<<"Enter quantity of pizza: ";
			cin>>q;
			p[i]=(q*500);
		     break;
		     
		case 's':
		
			cout<<"Enter quantity of sandwich: ";
			cin>>q;
			p[i]=(q*150);
		    break;
        
	}
}

	
		
	for(i=0;i<s;i++)
	{
		sum=sum+p[i];
	}
	cout<<"Total charges of your order is: "<<sum;
}

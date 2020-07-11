#include<iostream>
using namespace std;
class banks
{
	int accbal, trans, dep, drawl;
	float interest;
	public:
		
		bank(int accbal, float interest)
		{
			this->accbal=accbal;
			this->interest=interest;
		}
		void showaccbal()
		{
			cout<<"\nACCOUNT BALANCE: "<<accbal<<endl;
		}
		void deposit()
		{
			cout<<"\nDEPOSIT AMOUNT: ";
			int dep;
			cin>> dep;
			accbal=accbal+dep;
			++trans;
		}
		void withdraw()
		{
			cout<<"\nWITHDRAW AMOUNT: ";
			int draw;
			cin>>draw;
			accbal=accbal-draw;
			++trans;
		}
		void transs()
		{
			++trans;
		}
		void interet()
		{
			float ans;
			ans=(dep*interest)/100;
			cout<<"\nINTEREST: "<<ans<<"INTEREST RATE AT THIS PERIOD: "<<interest<<endl;
		}
		void showtrans()
		{
			cout<<"\nTOTAL TRANSACTIONS: "<<trans<<endl;
		}
};


int main()
{
	banks ob;
	
	int accbal, ch;
	char choice;
	cout<<"\tWELCOME TO STANDARD CHARTED BANK\t";
	cout<<"\nENTER ACCOUNT BALANCE: ";
	cin>>accbal;
	
	ob.bank(accbal,0.50);
	system("CLS");
	do
	{
		cout<<"\n\t MENU\n\n";
		cout<<"ENTER THE  ASSOCIATED NUMBER OF THE TASK YOU WANT TO PERFORM\n ";
		cout<<"1- Display The Account Balance";
	cout << "\n2- Display the number of transactions"; 
    cout <<"\n3- Display interest earned for this period"; 
    cout << "\n4- Make a deposit"; 
    cout << "\n5- Make a withdrawal"; 
    cout <<"\n6- Exit the program\n";
    cin >> ch;
    switch (ch)
    {
    	case 1:
    		{
    		 ob.showaccbal();
			 break;	
			}
		case 2:
			{
				ob.showtrans();
				break;
			}
		case 3:
			{
				ob.interet();
				break;
			}
		case 4:
			{
				ob.deposit();
				break;
			}
		case 5:
			{
				ob.withdraw();
				break;
			}
		case 6:
			{
				cout<<"\nTHANKYOU FOR AVAILING OUR SERVICES\n";
				exit(0);
			}
			default:
				{
					cout<<"\nINCORRECT INPUT\n";
					break;
				}
	}
	cout<<"\nYOU WISH TO CONTINUE: ";
	cin>>choice;
	
}while (choice=='y');
system ("cls");
}























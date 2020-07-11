#include<iostream>
#include <cstdlib> 
#include<cmath>
using namespace std;
int main()
{
	int c,  counter=0, d, i; 
	float  num1, num2, ans;
	double result;
	
	cout<<"         CALCULATOR           "<<endl;
	cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Division"<<endl<<"4. Multiplication"<<endl<<"5. Modulo"<<endl<<"6. Square"<<endl<<"7. Square root"<<endl<<"8. Cube root"<<endl;
	cout<<"9. Exponent"<<endl<<"10. Logarithm"<<endl<<"11. Sinusoidal"<<endl<<"12. Co-sinusoidal"<<endl<<"13. Tangent"<<endl<<"14. Absolute"<<endl;
	cout<<"Enter option to perform operation: ";
	cin>>c;
	switch (c)
	{
		case 1://add
			cout<<"Enetr first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			ans=num1+num2;
			cout<<"Addition of the numbers is: "<<ans<<endl;
			break;
		case 2://sub
			cout<<"Enetr first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			ans=num1-num2;
			cout<<"Subtraction of the numbers is: "<<ans<<endl;
			break;
		case 3://div
			cout<<"Enetr dividend: ";
			cin>>num1;
			cout<<"Enter divisor: ";
			cin>>num2;
			ans=num1/num2;
			cout<<"Division of the numbers is: "<<ans<<endl;
			break;
		case 4://mult
			cout<<"Enetr first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			ans=num1*num2;
			cout<<"Multiplication of the numbers is: "<<ans<<endl;
			break;
		case 5://modulo
			cout<<"Enetr first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			ans=num1%num2;
			cout<<"Modulo of the numbers is: "<<ans<<endl;
			break;
		case 6://square
			cout<<"Enter a number: ";
			cin>>num1;
			ans=num1*num1;
			cout<<"Square of the number is: "<<ans<<endl;
			break;
		case 7://sqrt
			cout<<"Enter a number: ";
			cin>>num1;
			while(num1%2==0)
			{
				num1=num1/2;
				counter++;
			}
			if(counter%2==0)
				{
					d=counter/2;
					for(i=1;i<=d;i++)
					{
						ans=ans*2;
					}
				}
				if(counter%2!=0)
				{
					counter=counter+1;
					d=counter/2;
					for(i=1;i<=d;i++)
					{
						ans=ans*2;
					}
				}
				
			
			cout<<"Square root is: "<<ans<<endl;
			break;
		case 8://cubert
			cout<<"Enter a number: ";
			cin>>num1;
			while(num1%3==0)
			{
				num1=num1/3;
				counter++;
			}
			if(counter%3==0)
				{
					d=counter/3;
					for(i=1;i<=d;i++)
					{
						ans=ans*3;
					}
				}
				if(counter%3!=0)
				{
					counter=counter+1;
					d=counter/3;
					for(i=1;i<=d;i++)
					{
						ans=ans*3;
					}
				}
				cout<<"Cube root is: "<<ans<<endl;
				break;
		case 9://exp
			cout<<"Enter a number: ";
			cin>>num1;
			cout<<"Enter exponent: ";
			cin>>num2;
			for(i=1;i<=num2;i++)
			{
				ans=ans*num1;
			}
			cout<<"The answer of number "<<num1<<" raised to exponent "<<num2<<" is: "<<ans<<endl;
			break;
		case 10/*log*/:
			cout<<"Enter a number: ";
			cin>>num1;
			result=log(num1);
			cout<<"The natural logarithm is = "<<result<<endl;
		case 11/*sin*/:
			cout<<"Enter a number: ";
			cin>>num1;
			result=sin(num1);
			cout<<"The sin = "<<result<<endl;
		case 12/*cos*/:
			cout<<"Enter a number: ";
			cin>>num1;
			result=cos(num1);
			cout<<"The cos = "<<result<<endl;
			break;
		case 13/*tan*/:
			cout<<"Enter a number: ";
			cin>>num1;
			result=tan(num1);
			cout<<"The tan = "<<result<<endl;
		case 14:
			cout<<"Enter a number: ";
			cin>>num1;
			ans=abs(num1);
			cout<<"The absolute value is = "<<ans<<endl;
		
			
	}
	
}

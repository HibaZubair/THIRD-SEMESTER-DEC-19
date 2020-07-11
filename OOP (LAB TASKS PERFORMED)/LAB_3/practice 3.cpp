#include<iostream>
using namespace std;
class a
{
	int i;
	public:
	
		a(int i)
		{
			this->i=i;
			cout<<"This is constructor";
		}
    ~a()
    {
    	cout<<"\nData removed";
	}
};
int main()
{
	int j;
	a ob(1);

}

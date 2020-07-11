#include<iostream>

using namespace std;
int main()
{
	int mat1[2][2], mat2[2][2], i, j, d=1, k=0, res[2][2], c=0;
	
	cout<<"MATRIX 1:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter value for matrix["<<i<<"]"<<" ["<<j<<"] = ";
			cin>>mat1[i][j];
		}
	}
		
	cout<<endl<<"MATRIX 2:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter value for matrix["<<i<<"]"<<" ["<<j<<"] = ";
			cin>>mat2[i][j];
		}
	}
	cout<<"MATRIX 1: "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<mat1[i][j];
			if(j==1)
			{
				cout<<endl;
			}
		}
	}
	cout<<"MATRIX 2: "<<endl;
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<mat2[i][j];
			if(j==1)
			{
				cout<<endl;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			if(j==0)
			{
			res[i][j]=(mat1[c][k]*mat2[k][k])+(mat1[c][d]*mat2[d][k]);
		
		    }
			if(j==1)
			{
				res[i][j]=mat1[c][k]*mat2[k][d]+(mat1[c][d]*mat2[d][j]);
				c++;
			}
		
		}
	}
	cout<<"Result of multiplication of both the matrices= "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<res[i][j];
			if(j==1)
			{
				cout<<endl;
			}
		}
	}

}

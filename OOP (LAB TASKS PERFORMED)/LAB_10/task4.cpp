#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class participant
{   	int id[3],id1,max,i;
		char name[10][10];
		double score[3];
		public:
			void Input(){
				for(i=0;i<=2;i++){
				cout<<"\nEnter Your I.D: ";
				cin>>id[i];
				cout<<"\nEnter Your Name: ";
				cin>>name[i];
				cout<<"\nEnter Your Score: ";
				cin>>score[i];
			    }
			}
			
			void Output(){
				cout<<"\nEnter I.D To Search: ";
				cin>>id1;
				for(i=0;i<=2;i++){
				if(id1==id[i]){
				cout<<"\nName: "<<name[i];
				cout<<"\nScore: "<<score[i];
			    }
			  }
		    }
			
			void Max(){
				max=score[0];
				for(i=0;i<=2;i++){
                    if(max<score[i]){
					max=score[i];
				    }
				}
				cout<<"\nMaximum Score Is: "<<max;
			}
			
};
int main(){
	participant part;
	part.Input();
	ofstream fout;
	fout.open("Student.txt",ios::out);
	fout.write((char*)&part,sizeof(part));
	part.Output();
	fout.write((char*)&part,sizeof(part));
	part.Max();
	fout.write((char*)&part,sizeof(part));
	fout.close();
	
	
	
}

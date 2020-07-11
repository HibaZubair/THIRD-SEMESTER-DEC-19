#include<iostream>
using namespace std ; 
class Meal{
string name ; 
int calorie ;
public:
Meal(){name="",calorie=0 ;}
Meal(string name ="" , int  calorie=0){
this->name=name ;
this->calorie = calorie; 	
}
Meal operator+(Meal &obj){
this->calorie += obj.calorie ;
cout<<"Total calorie of week"<<calorie ;
}

};

int main(){

int i, n =21;
string entree ;
int cal ;
for(i=1;i<21;i++){
cout<<"Enter entree" ;
cin>>entree ;
cout<<"Enter Calories" ;
cin>>cal; 
Meal M(entree,cal) ;
}
for(i=1;i<21;i++){
Meal M[i]+ MealM[i] ;
}
return 0 ;	
} 

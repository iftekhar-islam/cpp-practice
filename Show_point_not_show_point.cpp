#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){


float x,y;
float division, sum,subtraction;
int mod;
cout<<"Pleare enter two floating number"<<endl;

cin>>x>>y;

cout<< fixed<<setprecision(4);
cout<<showpoint;
sum=(float)x+y;
cout<<setw(30)<<"Summation is: " <<sum<<endl ; 
cout<<noshowpoint;
subtraction=(float)x-y;
cout<<setw(30)<<"Subtraction is: "  << subtraction<<endl ;

division=x/y;

cout<<setw(30)<<"Division is: " <<division;

/*mod=x%y;

cout<<mod<<endl;
*/
getch();

}


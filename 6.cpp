//Write a program to calculate factorial of a number






#include <iostream>
using namespace std;
int main(){

 int n;
 cout<<"N :" ;
 cin>>n;

 int product =1;
 for(int i=1;i<=n;i++){

    product *=i;
 }

 cout<<product<<endl;



}

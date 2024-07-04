//Write a program to check whether a given number is a Prime number or not



#include <iostream>
using namespace std;
int main(){

int n;
cout<<"N : ";
cin>>n;
int count=0;
int i=1;
while(i<=n){
   if( n%i==0){
    count++;
   }
   i++;

}
if(count==2){
        cout<<"prime number" ;
}

else{
    cout<<"not a prime number " ;
}
}

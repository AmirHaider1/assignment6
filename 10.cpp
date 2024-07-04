//Write a program to reverse a given number

#include <iostream>
using namespace std;

int main(){
    int i;
    cout<<"enter number :";
    cin>>i;


    int rev=0;
    for(;i>0;i=i/10)
       rev=(rev*10)+(i%10);





cout<<"reverse is "<<rev;




}

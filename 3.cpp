//Write a program to calculate sum of first N odd natural numbers


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter N :";
    cin>>n;

    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        sum +=i;
        }





    }
   cout<<sum<<endl;



}

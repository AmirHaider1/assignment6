//Write a program to calculate sum of cubes of first N natural numbers

#include <iostream>
using namespace std;
int main(){

int n;
cout<<"N : ";
cin>>n;

int sum =0;
for(int i=1;i<=n;i++){

    sum +=i*i*i;

}
  cout<<sum<<endl;

}

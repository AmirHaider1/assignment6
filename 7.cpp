//Write a program to count digits in a given number


#include <iostream>
using namespace std;
int main(){

int n;
cout<<"N : ";
cin>>n;
int count =0;
while(n!=0){
    n=n/10;
    count++;
}
  cout<<count<<endl;

}

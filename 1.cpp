// Write a program to calculate sum of first N natural numbers





#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"n :"<<endl;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++) {

        sum +=i;
    }

 cout<<sum<<endl;



}

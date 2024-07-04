//Write a program to calculate LCM of two numbers

#include <iostream>
using namespace std;
int main()  {

int n,m;
cout<<"enter n : " ;
cin>>n;
cout<<"enter m : " ;
cin>>m;

for (int i =1;i<=m*n;i++){

    if(i%n==0 && i%m==0){
        cout<<"LCM is : " <<i;
        break;
    }
}



 cout<<endl;


}








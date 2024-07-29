// Swap Two Numbers

#include<iostream>
using namespace std;

int main (){
    
    int a,b,temp;
    cout<<"Enter two value for a and b: ";
    cin>>a;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swap the value : "<<endl;
    cout<<"a= "<<a<<" ";
    cout<<"b= "<<b;

    return 0;
}
/*A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques.*/

#include<iostream>
using namespace std;
int main(){
    int a=5,b=3,c;
    cout<<"Before swap: a = "<<a<<" b = "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swap: a = "<<a<<" b = "<<b<<endl;
    return 0;
}
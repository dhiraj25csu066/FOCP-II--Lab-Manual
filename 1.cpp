/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c; // a,b,c are marks of students
    cout<<"Enter marks:";
    cin>>a>>b>>c;
    float average = (a+b+c)/3.0;
    cout<<"average ="<<average;
    return 0;
}

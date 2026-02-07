/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
display results.*/

#include<iostream>
using namespace std;
int main(){
    int n,s; //n=no.of employees,s=basic salary
    cout<<"Enter no.of employees and basic salary :";
    cin>>n>>s;
    float bonus=(s)*(0.12);
    float net_salary=n*(s+bonus);
    cout<<"Basic salary="<<s<<endl<<"net salary= "<<net_salary;
    return 0;
}
/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa*/

#include<iostream>
using namespace std;
int main(){
    float fahrenheit;
    cout<<"enter temp in fahrenheit:";
    cin>>fahrenheit;
    float celsius = (fahrenheit*(9/5))+32;
    cout<<"temp in celsius is "<<celsius;
    return 0;
}
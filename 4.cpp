/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/

#include<iostream>
using namespace std;

int main(){
    int itemNo, qty;
    float price, amount, discount, finalBill;

    cout<<"Enter item number: ";
    cin>>itemNo;

    cout<<"Enter quantity: ";
    cin>>qty;

    cout<<"Enter unit price: ";
    cin>>price;

    amount = qty * price;
    discount = amount * 0.20;
    finalBill = amount - discount;

    cout<<"Total Amount = "<<amount<<endl;
    cout<<"Discount (20%) = "<<discount<<endl;
    cout<<"Final Bill = "<<finalBill;

    return 0;
}

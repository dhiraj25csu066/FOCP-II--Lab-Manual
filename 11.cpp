/* A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
expenses and apply a discount accordingly.*/

#include <iostream>
using namespace std;

int main() {
    int qty;
    double price, total;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter price per item: ";
    cin >> price;

    total = qty * price;

    if (qty > 1000) {
        total = total - (0.10 * total);  
    }

    cout << "Total expense = " << total;

    return 0;
}

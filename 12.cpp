/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
check the triangle type based on its sides.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equilateral triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles triangle";
    }
    else {
        cout << "Scalene triangle";
    }

    return 0;
}

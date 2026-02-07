/* A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
solution to calculate the roots of a quadratic equation.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, D, r1, r2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        cout << "Real and different\n";
        cout << r1 << " " << r2;
    }
    else if (D == 0) {
        r1 = -b / (2*a);
        cout << "Real and equal\n";
        cout << r1;
    }
    else {
        cout << "Complex roots";
    }

    return 0;
}

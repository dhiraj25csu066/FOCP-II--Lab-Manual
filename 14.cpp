/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
The program should continue executing based on the user's choice and display the result of each operation.*/

#include <iostream>
using namespace std;

int main() {
    float a, b;
    int choice;

        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
    
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Result = " << a * b;
                break;

            case 4:
                if (b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by zero not allowed";
                break;
        }
    return 0;
}

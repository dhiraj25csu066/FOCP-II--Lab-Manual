/* A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner.*/

#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;

    cout << "Enter scores of Player 1, Player 2, Player 3: ";
    cin >> p1 >> p2 >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is ahead";
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is ahead";
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is ahead";
    }
    else {
        cout << "It is a tie";
    }

    return 0;
}

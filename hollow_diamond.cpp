/*
Author: Niraj Patil
Aim: To print a star pattern
Output:
      *
    *   *
  *       *
*           *
*           *
  *       *
    *   *
      *
*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height of the upper half of pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        cout << "* ";
        if (i != 1) {
            for (int j = 2; j < 2 * i - 1; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        cout << "* ";
        if (i != n) {
            for (int j = 2; j < 2 * (n - i) + 1; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
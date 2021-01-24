/*
Author: Niraj Patil
Aim: To print a hollow diamond inscribed in a rectangle pattern of "*"
Output:
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height of upper half of pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            for (int j = 1; j <= 2 * n - 1; j++) {
                cout << "* ";
            }
        }
        else {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << "* ";
            }
            for (int j = 1; j <= 2 * (i - 1) -1; j++) {
                cout << "  ";
            }
            for (int j = 1; j <= n - i + 1; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            for (int j = 1; j <= 2 * n - 1; j++) {
                cout << "* ";
            }
        }
        else {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            for (int j = 1; j <= 2 * (n - i) - 1; j++) {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}
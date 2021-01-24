/*
Author: Niraj Patil
Aim: To print a hollow butterfly pattern of "*"
Output:
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of half wing: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || j == i)
				cout << "*";
			else
				cout << " ";
		}
		for (int j = 1; j <= n; j++) {
			if (j == n || j == n - i + 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || j == n - i + 1)
				cout << "*";
			else
				cout << " ";
		}
		for (int j = 1; j <= n; j++) {
			if (j == n || j == i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
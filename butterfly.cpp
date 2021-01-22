/*
Author: Niraj Patil
Aim: To print a butterfly pattern of "*"
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of half wing: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j < n; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2*(n - i); j++) {
			cout << " ";
		}
		for (int j = n - i; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n; i >= 1; i--) {
		for (int j = n - i; j < n; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2 * (n - i); j++) {
			cout << " ";
		}
		for (int j = n - i; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

/*
Author: Niraj Patil
Aim: To print a inverted half pattern of "*"
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter the height: ";
	cin >> n;

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
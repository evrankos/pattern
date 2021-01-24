/*
Author: Niraj Patil
Aim: To print a zig-zag pattern of "*" of height = 3
Output:
	Version-1:
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1

	Version-2:
	1 1 1 1 1
	2 2 2 2
	3 3 3
	4 4
	5
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of pyramid: ";
	cin >> n;

	cout << "Version-1: " << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl << "Version-2: " << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
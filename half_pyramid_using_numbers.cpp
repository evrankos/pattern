/*
Author: Niraj Patil
Aim: To print a halfpyramid pattern using numbers
Output: 
	Version-1:
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5

	Version-2:
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of the pyramid: ";
	cin >> n;

	cout << "Version-1: " << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl << "Version-2: " << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

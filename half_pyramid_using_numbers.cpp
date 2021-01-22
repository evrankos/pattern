/*
Author: Niraj Patil
Aim: To print a halfpyramid pattern using numbers
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of the pyramid: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}

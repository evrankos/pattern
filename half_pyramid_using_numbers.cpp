/*
Author: Niraj Patil
Aim: To print a half pyramid after 180degrees pattern of "*"
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}
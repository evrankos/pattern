/*
Author: Niraj Patil
Aim: To print a floyd's triangle pattern
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	int count = 1;
	
	cout << "Enter the height of the Floyd's triangle: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << count<<" ";
			count++;
		}
		cout << endl;
	}
	return 0;
}

/*
Author: Niraj Patil
Aim: To print a 0-1 pattern
Output: 
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the height of the pattern: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if ((i + j) % 2 == 0)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	return 0;
}
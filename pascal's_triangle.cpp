/*
Author: Niraj Patil
Aim: To print a pascal's triangle pattern
Output:
	1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include<iostream>
using namespace std;

int main() {
	int n, m = 1;
	
	cout << "Enter the height of triangle: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			if (i == 0 || j == 0 || j == i)
				m = 1;
			else
				m = m * (i - j + 1) / j;
			cout << m << " ";
		}
		cout << endl;
	}
	return 0;
}
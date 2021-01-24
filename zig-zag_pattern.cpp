/*
Author: Niraj Patil
Aim: To print a zig-zag pattern of "*" of height = 3
Output :
	*       *
  *   *   *   *
*       *       *

Important Note: Only the logics containing "n" will be true for the patttern of heights other than "3"
				[ i.e., to make a similar pattern of n height, we will require {4*(n-1)}+1 number of columns ]
*/

#include<iostream>
using namespace std;

int main() {
	int n = 3;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 4 * (n - 1) + 1; j++) {
			if (((i + j) % 4 == 0) || (i % 2 == 0 && j % 4 == 0))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
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
		for (int j = 1; j <= n; j++) {
			if(j<=n-i)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
/*
Author: Niraj Patil
Aim: To print a rectangle pattern of "*"
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
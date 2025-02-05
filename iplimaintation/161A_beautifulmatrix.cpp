// https://codeforces.com/problemset/problem/263/A

#include<iostream>
using namespace std; 
int Matrix(int matrix[5][5], int rows, int cols){
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            if(matrix[i][j] == 1) {
                return (abs(2-i) + abs( 2-j));
            }
        }
    }
    return 0 ;
}

int main(){
    int arr[5][5] ; 
    int row, col;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];   
        }
    }
    cout<<Matrix(arr,5,5);
    return 0;
}
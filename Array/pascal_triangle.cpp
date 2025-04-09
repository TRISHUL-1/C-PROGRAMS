#include<iostream>

using namespace std;

int find_nCr(int n, int r){
    long long res = 1;
    for (int i = 1; i <= r; i++){
        res = res * (n--);
        res = res / i;
    }
    return res;
}

int findElement(int r, int c){
    int ele = find_nCr(r, c);
    return ele;
}

int main(){
    int row, column;
    cout << "Enter the row: ";
    cin >> row;
    cout << "Enter the column: ";
    cin >> column;

    int ele = findElement(row, column);
    cout << "Element at the specified location is : " << ele;
    return 0;
}
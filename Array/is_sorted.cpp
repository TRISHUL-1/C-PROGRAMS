#include<iostream>
using namespace std; 

bool isSorted(int a[], int n){
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[i-1]){
            
        }
        else
            return false;
        
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << isSorted(a, n);

    return 0;
}
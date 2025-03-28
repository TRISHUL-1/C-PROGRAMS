#include<iostream>
using namespace std;

void leftRotate(int a[], int n, int k){
    int d = k % n;
    int temp[d];

    for (int i = 0; i < d; i++){
        temp[i] = a[i];
    }

    for (int i = d; i < n; i++){
        a[i - d] = a[i];
    }

    for (int i = n - d; i < n; i++){
        a[i] = temp[i - (n - d)];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int k;
    cin >> k;
    leftRotate(arr, n, k);

    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";

    return 0;
}
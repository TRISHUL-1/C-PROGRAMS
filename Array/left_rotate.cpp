#include<iostream>
using namespace std;

void leftRotate(int arr[], int n){
    int first_element = arr[0];
    for (int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = first_element;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    leftRotate(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
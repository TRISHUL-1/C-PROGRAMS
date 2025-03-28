#include<iostream>
using namespace std;

int secondLargest(int ar[], int n){
    int largest = ar[0];
    int slargest = -1;

    for (int i = 1; i < n;i++){
        if (ar[i] > largest){
            slargest = largest;
            largest = ar[i];
        }
        else if (ar[i] < largest && ar[i]> slargest){
            slargest = ar[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int sLargest = secondLargest(arr, n);

    cout << sLargest;
    return 0;
}
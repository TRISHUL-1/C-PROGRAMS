#include<iostream>
#include<climits>
using namespace std;

int secondSmallest(int ar[], int n){
    int smallest = ar[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n;i++){
        if (ar[i] < smallest){
            ssmallest = smallest;
            smallest = ar[i];
        }
        else if (ar[i] > smallest && ar[i] < ssmallest){
            ssmallest = ar[i];
        }
    }
    return ssmallest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int sSmallest = secondSmallest(arr, n);

    cout << sSmallest;
    return 0;
}
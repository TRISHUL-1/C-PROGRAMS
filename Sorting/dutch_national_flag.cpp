//  THIS PROGRAM USES DUTCH NATIONAL FLAG ALGORITM TO SORT THE ARRAY
//  THIS ALGORITHM USES 3 POINTERS APPROACH (LOW, MID AND HIGH)
//  THE CONDITION IS 0-(LOW -1) -> 0'S
//  THE CONDITION IS LOW-(MID -1) -> 1'S
//  THE CONDITION IS HIGH+1 -(n -1) -> 2'S


#include<iostream>
using namespace std;

void sortingAlgorithm(int a[], int n){
    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(a[mid] == 0) {
            swap(a[mid], a[low]); 

            low++;
            mid++;
        }
        else if(a[mid] == 1)
            mid++;
        else{
            swap(a[mid], a[high]); 
            high--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortingAlgorithm(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
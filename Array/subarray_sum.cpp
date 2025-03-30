// TO SOLVE THE MAXIMUM SUBARRAY SUM WE USE KADANE'S ALGORITHM
// HERE WE ADD THE ELEMENTS IN EVERY ITERATION AND STORE THE SUM IN MAX IF SUM > MAX
// ELSE WE CONTINUE TO SUM OR MODIFY THE SUM ACCORDINGLY

#include<iostream>
#include <climits>
using namespace std;

int subarraySum(int a[], int n){
    int sum = 0, max = INT_MIN;
    for (int i = 0; i < n; i++){
        sum += a[i];

        if(sum > max)
            max = sum;

        if(sum < 0)
            sum = 0;
    }

    return max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << subarraySum(arr, n);
    return 0;
}
//  Here we write the code for longest subarray with the sum k
// The array can have only positive integers

#include <iostream>
using namespace std;

int getLongestSubarray(int a[], int n, long long k){
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;
    while( right < n){
        while(sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k)
            maxlen = max(maxlen, right - left + 1);

        right++;
        if(right < n)
            sum += a[right];
    }
    return maxlen;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long k;
    cin >> k;
    int l = getLongestSubarray(arr, n, k);

    cout << l;

    return 0;
}
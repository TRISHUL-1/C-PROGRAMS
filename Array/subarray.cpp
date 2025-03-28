//  Here we write the code for longest subarray with the sum k
// The array can have both positive and negative integers

#include <iostream>
#include <map>
using namespace std;

int getLongestSubarray(int a[], int n, long long k){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum == k){
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
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
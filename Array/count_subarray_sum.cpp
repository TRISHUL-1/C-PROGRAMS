#include<iostream>
#include<vector>
#include<map>

using namespace std;

int countSubarraySum(vector<int> ar, int k){
    map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;
    for (int i = 0; i < ar.size(); i++){
        presum += ar[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int k;
    cin >> k;
    int l = countSubarraySum(ar, k);
    cout << l;
    return 0;
}
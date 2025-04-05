#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// OPTIMAL SOLUTION
int longestConsecutiveSequence(vector<int> ar){
    int n = ar.size();
    if(n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(ar[i]);

    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int l = longestConsecutiveSequence(arr);
    cout << l;
    return 0;
}

// HERE IS THE BETTER SOLUTION

// int n = nums.size();
// if(n == 0)
//     return 0;
// sort(nums.begin(), nums.end());
// int longest = 1, lastSmall = INT_MIN;
// int cnt = 0;
// for (int i = 0; i < n; i++){
//     if(nums[i] -1 == lastSmall){
//         cnt += 1;
//         lastSmall = nums[i];
//     }
//     else if(lastSmall != nums[i]){
//         cnt = 1;
//         lastSmall = nums[i];
//     }
//     longest = max(longest, cnt);
// }
// return longest;

//  Here we rearrange the elements in the array
//  Here the +ve and -ve elements are placed alternatively (the array starts with positive numbers)
//  In this case the length of the array is even, but if the question demands the array length of odd numbers
//  Then we use the BRUTE FORCE solution, where we sote +ve and -ve values separately to be combined later

#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeElements(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++){
        if(nums[i] < 0){
            ans[negIndex] = nums[i];
            negIndex += 2;
        }   else {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    nums = rearrangeElements(nums);

    for(auto it: nums)
        cout << it << " ";

    return 0;
}
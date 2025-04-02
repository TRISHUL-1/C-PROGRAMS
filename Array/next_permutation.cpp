#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> nextPermutation(vector<int> nums){
    int ind = -1;
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            ind = i;
            break;
        }
    }
    if (ind == -1){
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for (int i = n - 1; i > ind; i--){
        if(nums[i] > nums[ind]){
            swap(nums[i], nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1, nums.end());
    return nums;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n), nxt(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    nxt = nextPermutation(nums);

    for(auto it: nxt)
        cout << it << " ";

    return 0;
}
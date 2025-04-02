#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> leaders_array(vector<int> a){
    vector<int> ans;
    int n = a.size();
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--){
        if(a[i] >= maxi){
            maxi = max(maxi, a[i]);
            ans.push_back(maxi);
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n), ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ans = leaders_array(arr);
    for(auto it: ans)
        cout << it << " ";

    return 0;
}
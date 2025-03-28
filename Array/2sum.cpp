#include<iostream>
#include<vector>
#include<map>
using namespace std;

pair<int, int> twoSum(int a[], int n, int target){          // this is the better solution
    map<int, int> mpp;
    for (int i = 0; i < n; i++){
        int num = a[i];
        int rem = target - num;
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem], i};
        }
        mpp[num] = i;
    }

    return {-1, -1};
}


string is_twoSum(int a[], int n, int target){           // This is the optimal solution but only 
    int left = 0, right = n - 1;                        // if the return type is in YES/NO fashion
    while(left < right){
        int sum = a[left] + a[right];
        if(sum == target)
            return "YES";
        else if (sum < target)
            left++;
        else
            right--;
    }

    return "NO";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;
    pair <int, int> pr = twoSum(arr, n, target);
    cout << pr.first << " " << pr.second << endl;
    cout << is_twoSum(arr, n, target);
    return 0;
}
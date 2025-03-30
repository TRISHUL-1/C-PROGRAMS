// THIS PROBLEM USES THE MOORE'S VOTING ALGORITHM FOR ITS SOLUTION

#include<iostream>
using namespace std;

int majorityElement(int a[], int n){
    int ele;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(cnt == 0){
            ele = a[i];
            cnt = 1;
        } 
        else if(a[i] == ele)
            cnt++;
        else
            cnt--;
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++){          //    we use this part of the code only if condition says
        if(a[i] == ele){                  //    the array may or may not contain majority element
            cnt1++;
        }
    }
    if(cnt1 > n/2)
        return ele;
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ele = majorityElement(arr, n);
    cout << ele;
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < row; col++){
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);  
    }
    return ansRow;
}

vector<vector <int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<vector <int>> ans = pascalTriangle(n);
    for(auto i: ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotateBy90(vector<vector<int>>& matrix){
    int n = matrix.size();
    // TRANSPOSE
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // REVERSE
    for (int i = 0; i < n; i++){
        // row is matrix[i]
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    rotateBy90(matrix);

    for(auto i: matrix){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
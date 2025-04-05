#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<int> ar;
        int m = ( n > 0) ? matrix[0].size() : 0;
        int top = 0;
        int bottom = n -1;
        int left = 0;
        int right = m -1;
        while(top <= bottom && left <= right){

            // traverse from left to right at top
            for(int j = left; j <= right; ++j){
                ar.push_back(matrix[top][j]);
            }

            top++;  // move down a row

            // traverse from top to bottom at right
            for(int i = top; i <= bottom; ++i){
                ar.push_back(matrix[i][right]);
            }

            right--;    // move a column to the left

            // traverse from right to left at bottom
            if( top <= bottom){
                for(int j = right; j >= left; --j){
                    ar.push_back(matrix[bottom][j]);
                }
    
                bottom--;   // move a row up
            }

            // traverse from bottom to top at left
            if(left <=  right){
                for(int i = bottom; i >= top; --i){
                    ar.push_back(matrix[i][left]);
                }
                left++; // move a column to the right
            }
        }
        return ar;
}


int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for(auto i: matrix){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }

    vector<int> ar = spiralOrder(matrix);

    for(auto i: ar){
            cout << i << " ";
        }

    return 0;
}
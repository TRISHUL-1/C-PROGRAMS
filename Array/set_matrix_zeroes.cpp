#include<iostream>
#include<vector>
using namespace std;

void zeroMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = (n > 0) ? matrix[0].size() : 0;
    int col0 = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            if(matrix[i][j] != 0){
                if (matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for (int j = 0; j < m; j++){
            matrix[0][j] = 0;
        }
    }
    if(col0 == 0){
        for (int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
}

int main(){
    vector<vector<int>> matrix =
    {
        {1,1,1,1},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,1}
    };

    zeroMatrix(matrix);

    for(auto i: matrix){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

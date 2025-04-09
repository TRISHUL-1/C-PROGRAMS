#include<iostream>

using namespace std;

void printRow(int n){
    if( n == 0)
        return ;
    int len = n, ans = 1;
    for (int i = 1; i <= n; i++){
        cout << ans << " ";
        ans = (ans * --len) / i;
    }
}

int main(){
    int n;
    cin >> n;
    printRow(n);

    return 0;
}
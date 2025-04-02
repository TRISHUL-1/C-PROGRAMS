#include<iostream>
using namespace std;

int buy_and_sell_stocks(int prices[], int n){
    int mini = prices[0], max_profit = 0;
    for (int i = 0; i < n; i++){
        int cost = prices[i] - mini;
        max_profit = max(max_profit, cost);
        mini = min(mini, prices[i]);
    }

    return max_profit;
}

int main(){
    int n;
    cin >> n;
    int prices[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    cout << buy_and_sell_stocks(prices, n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void maxProfit(int prices[], int n) {

    int buy[n];
    buy[0] = prices[0]; 

    for (int i = 1; i < n; i++) {
        buy[i] = min(prices[i], buy[i-1]);  
    }
    int maxans = 0;
    for (int i = 0; i < n; i++) {
        maxans = max(maxans, prices[i] - buy[i]);  
    }

    cout << maxans;
}

int main() {
    int n;
    cin >> n;  
    int price[n];

    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    maxProfit(price, n);
   
}
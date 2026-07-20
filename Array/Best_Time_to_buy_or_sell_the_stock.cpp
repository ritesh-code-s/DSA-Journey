

// problem:-  Best Time to Buy or sell the stock ;


#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0;i < n; i++) {

        cin >> arr[i];
    }

    int mini = arr[0];

    int maxProfit = 0;

    for(int i = 0; i < n; i++ ) {

        int cost = arr[i] - mini;

        maxProfit = max(maxProfit,cost);

        mini = min(mini,arr[i]);

    } 

    cout  << "Max-Profit is --->" <<  maxProfit;


}
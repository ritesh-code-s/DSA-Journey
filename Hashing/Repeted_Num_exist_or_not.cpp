

#include <bits/stdc++.h>
using namespace std;

void Solve(vector<int> &arr)
{
    int n = arr.size();

    int hash[n + 1] = {0};

    for (int x : arr) {
        
        hash[x]++;
    }

    int q;
    cin >> q;

    while (q--){

        int number;
        cin >> number;

        cout << hash[number] << endl;
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
    
        cin >> arr[i];
    }

    Solve(arr);

    return 0;
}
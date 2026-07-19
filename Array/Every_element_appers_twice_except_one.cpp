#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0 ; i < n; i++) {

        cin >> arr[i];
    }

    int xorr = 0;

    for(int i = 0; i < n; i++) {

        xorr = xorr ^ arr[i];
    }

    cout << "The number except the twice apper is: ---> " << xorr;


    return 0;
}
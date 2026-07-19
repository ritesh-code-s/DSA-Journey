#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;


    vector<int>arr(n);

    for(int i = 0;i < n; i++) {

        cin >> arr[i];
    }

    int num;
    cin >> num;

    for(int i = 0; i < n; i++) {

        if(arr[i] == num){
            cout << i;
            return 0;
        }
    }
    cout <<  -1;
}
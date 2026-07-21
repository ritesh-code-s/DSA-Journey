
#include <bits/stdc++.h>
using namespace std;

void SortColors(vector<int> &arr) {

    int n = arr.size();

    int zero = 0, one = 0, two = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) {

            zero++;

        }
        else if(arr[i] == 1) {

            one++;

        }
        else{

            two++;
        }
    }

    int i = 0;

    while (zero--) {

        arr[i++] = 0;
    }

    while (one--) {

        arr[i++] = 1;
    }

    while (two--) {

        arr[i++] = 2;
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    SortColors(arr);

    for (int x : arr) {

        cout << x << " ";
    }

    return 0;
}
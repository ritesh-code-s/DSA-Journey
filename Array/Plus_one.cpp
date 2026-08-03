#include <bits/stdc++.h>
using namespace std;

vector<int> Plus_one(vector<int> &digits) {

    int n = digits.size();

    for (int i = n - 1; i >= 0; i--) {

        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = Plus_one(arr);

    for (int x : ans) {
        cout << x << " ";
    }
}
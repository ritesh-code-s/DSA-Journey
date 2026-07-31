#include <bits/stdc++.h>
using namespace std;

void Binary_Search(vector<int> &arr, int target) {

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            cout << mid;
            return;
        }
        else if(target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "False";
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Binary_Search(arr, 5);
}
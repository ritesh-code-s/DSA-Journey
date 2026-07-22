#include <bits/stdc++.h>
using namespace std;


void Next_Permutation(vector<int> &arr) {

    int n = arr.size();
    int index = -1;

    for(int i = n-2; i >= 0; i--) {

        if(arr[i+1] > arr[i]) {

            index = i;
            break;
        }
    }

    if(index == -1) {

        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i = n-1; i > index; i--) {

        if(arr[i] > arr[index]) {

            swap(arr[i], arr[index]);
            break;
        }
    }

    reverse(arr.begin()+index+1, arr.end());
}


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);


    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }


    Next_Permutation(arr);


    for(auto x : arr) {

        cout << x << " ";
    }


    return 0;
}
 

#include <bits/stdc++.h>
using namespace std;

void Majority_Element(vector<int> &arr){

    int n = arr.size();

    vector<int> ans;

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {

            if(arr[i] == arr[j]) {

                count++;
            }
        }

        if(count > n/3) {

            if(find(ans.begin(), ans.end(), arr[i]) == ans.end()) {

                ans.push_back(arr[i]);
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {

        cout << ans[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    Majority_Element(arr);
}
#include <bits/stdc++.h>
using namespace std;

void Lower_Bond(vector<int>arr,int target) {

    int n = arr.size();
    int low = 0,high = n - 1;
    int ans = n;
    
    while(low <= high) {

        int mid = (low + high)/2 ;

        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {

            low = mid + 1;
        }

    }
    cout << ans;
    
}

int main() {

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n;i++) {
        cin >> arr[i];
    }

    Lower_Bond(arr,6);
    
    
}

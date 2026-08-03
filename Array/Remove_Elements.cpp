#include <bits/stdc++.h>
using namespace std;

int Remove_Elements(vector<int> &Nums , int val) {

    int n = Nums.size();

    int k = 0;

    for(int i = 0; i < n; i++) {

        if(Nums[i] != val) {

            Nums[k] = Nums[i];
            k++;
        }
    }

    return k;
    
};

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Remove_Elements(arr,2);

}
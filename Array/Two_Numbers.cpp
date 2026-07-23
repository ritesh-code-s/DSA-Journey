#include <bits/stdc++.h>
using namespace std;

void Two_Sum(vector <int> &arr) {

    int n = arr.size();

    int target;
    cin >> target;

    
        for (int i = 0; i < n; i++) {

            for ( int j = i + 1; j < n; j++) {

                if ( arr[ i ] + arr[ j ] == target) {

                    cout << i,j;
                }
            }
        }
} 

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n ; i++ ) {

        cin >> arr[i];
    }

    Two_Sum(arr);
}
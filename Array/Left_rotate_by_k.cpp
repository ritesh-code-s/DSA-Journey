

                        ///  Brute force

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int d;
//     cin >> d;

//     d = d % n;

//     for(int i = 0; i < d; i++) {

//         int temp = arr[0];

//         for(int j = 0; j < n-1; j++) {
//             arr[j] = arr[j+1];
//         }

//         arr[n-1] = temp;
//     }

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


                          // Optimal approach



#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    d = d % n;


    reverse(arr.begin(),arr.end());

    reverse(arr.begin(), arr.begin() + d);

    reverse(arr.begin() + d, arr.end());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}

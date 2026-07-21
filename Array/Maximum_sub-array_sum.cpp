

// brute force;

// #include <bits/stdtr1c++.h>
// using namespace std;

// void Maximum_sub_Array_sum(vector <int> &arr) {

//     int n = arr.size();

//     int maxi = 0;

//     for(int i = 0; i < n; i++) {

//         int sum = 0;

//         for(int j = i; j < n; j++) {

//             sum += arr[j];

//             maxi = max(sum,maxi);
//         }
//     }

//     cout << "Maximum sum of sub array is -->" << maxi;
// }

// int main() {

//     int n;
//     cin >> n;

//     vector <int> arr(n);

//     for(int i = 0; i < n; i++) {

//         cin >> arr[i];

//     }

//     Maximum_sub_Array_sum(arr);


// }

                                                  /////          Optimal way;


#include <bits/stdc++.h>
using namespace std;

void Maximum_sub_Array_sum(vector <int> &arr) {

    int n = arr.size();

    int maxi = INT_MIN;

    int sum = 0;

    for(int i = 0;i < n; i++) {

        sum += arr[i];

        if(sum > maxi){

            maxi =  sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }
     cout << "Maximum sum of sub array is -->" << maxi;
}

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    Maximum_sub_Array_sum(arr);


}


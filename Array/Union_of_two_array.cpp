

                    // brute force

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;


//     vector<int>arr1(n);

//     for(int i = 0;i < n; i++) {

//         cin >> arr1[i];
//     }



//     int m;
//     cin >> m;


//     vector<int>arr2(m);

//     for(int i = 0;i < m; i++) {

//         cin >> arr2[i];
//     }


//     set <int> st;

//     for(int i = 0; i < n; i++) {

//         st.insert(arr1[i]);

//     }

//     for(int i = 0; i < m; i++) {

//         st.insert(arr2[i]);
//     }

//     vector <int> temp;

//     for(auto it : st ) {
//         temp.push_back(it);
//     }

//     for(int i = 0; i < temp.size(); i++) {

//         cout << temp[i];
//     }


// }



                      // optimal way;

                      
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr1(n);

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    vector<int> arr2(m);

    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> union_arr;

    int i = 0;
    int j = 0;

    while(i < n && j < m) {

        if(arr1[i] <= arr2[j]) {

            if(union_arr.size() == 0 || union_arr.back() != arr1[i]) {
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else {

            if(union_arr.size() == 0 || union_arr.back() != arr2[j]) {
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n) {

        if(union_arr.size() == 0 || union_arr.back() != arr1[i]) {
            union_arr.push_back(arr1[i]);
        }
        i++;
    }

    while(j < m) {

        if(union_arr.size() == 0 || union_arr.back() != arr2[j]) {
            union_arr.push_back(arr2[j]);
        }
        j++;
    }

    for(int k = 0; k < union_arr.size(); k++) {
        cout << union_arr[k] << " ";
    }

    return 0;
}
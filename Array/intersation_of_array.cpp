
                                      /////   brute force;

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr1(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     int m;
//     cin >> m;

//     vector<int> arr2(m);

//     for(int i = 0; i < m; i++) {
//         cin >> arr2[i];
//     }

//     vector<int> intersection_arr;

//     // Marks whether an element in arr2 has already been used
//     vector<int> visited(m, 0);

//     for(int i = 0; i < n; i++) {

//         for(int j = 0; j < m; j++) {

//             if(arr1[i] == arr2[j] && visited[j] == 0) {
//                 intersection_arr.push_back(arr1[i]);
//                 visited[j] = 1;
//                 break;      // Move to the next element of arr1
//             }

//             // Since arrays are sorted, no need to continue
//             if(arr2[j] > arr1[i]) {
//                 break;
//             }
//         }
//     }

//     for(int x : intersection_arr) {
//         cout << x << " ";
//     }

//     return 0;
// }


                                                 ///// optimal soluction ;





#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> arr1(n);

    for(int i = 0; i < n; i++) {

        cin >> arr1[i];
    }

    int m;
    cin >> m;

    vector <int> arr2(m);

    for( int i = 0; i < m; i++) {

        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;


    vector <int> intersaction_arr;

    while(i < n && j < m) {

        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]) {

            j++;
        }

        else{
            intersaction_arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for ( int i = 0; i < intersaction_arr.size(); i++) {

        cout << intersaction_arr[i] << ".,";
    }

    return 0;
}


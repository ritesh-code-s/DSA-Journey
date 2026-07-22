

// brute force

// #include <bits/stdc++.h> 
// using namespace std;

// void Rearrange_Array(vector <int> &arr) {

//     int n = arr.size();

//     vector <int> positives;
//     vector <int> negatives;

//     for(int i = 0; i < n ; i++ ) {

//         if(arr[i] > 0) {

//             positives.push_back(arr[i]);
//         }
//         else {

//             negatives.push_back(arr[i]);
//         }
//     }

//     for(int i = 0; i < n/2; i++ ){

//         arr[2 * i] = positives[i];

//         arr[2 * i+1] = negatives[i];
//     }

//     for(int i = 0; i < n; i++ ) {

//         cout << arr[i] << " ";
//     }
// }
// int main() {

//     int n;
//     cin >> n;

//     vector <int> arr(n);

//     for(int i = 0; i < n; i++ ) {

//         cin >> arr[i];
//     }

//     Rearrange_Array(arr);
// }


                                          /////     optimal approach


#include <bits/stdc++.h>
using namespace std;


void Rearrange_Array(vector <int> &arr) {

    int n = arr.size();

    vector<int> ans_array(n,0);

    int Pos_index = 0 , Neg_Index = 1;

    for (int i = 0; i < n ; i++ ) {

        if(arr[i] < 0) {

            ans_array[Neg_Index] = arr[i];
            Neg_Index += 2;
        }
        
        else{
            ans_array[Pos_index] = arr[i];
            Pos_index += 2;
            
        }
    }
    

    for(int i = 0; i < n; i++ ) {

        cout << ans_array[i] << " ";
    }
}


int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++ ) {

        cin >> arr[i];
    }

    Rearrange_Array(arr);
}

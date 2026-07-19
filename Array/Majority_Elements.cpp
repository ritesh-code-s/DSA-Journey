
//                    // brute force


// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {

//         cin >> arr[i];
//     }
    
    
//     for( int i = 0; i< n; i++ ) {
        
//         int count = 0;


//         for (int j = 0; j < n; j++) {

//             if (arr[i] == arr[j]) {

//                 count++;
//             }
//         }

//         if(count > n/2 ){
            
//             cout << arr[i] << "\n";

//             return 0;
//         }
//     }

//     cout << "there is no element which occur more that n/2 times";


//     return 0;

// }



                          // better;

                          

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++ ) {

        freq[arr[i]]++;

        if(freq[arr[i]] > n/2){

            cout << arr[i];

            return 0;
        }
    }

    return -1;

}
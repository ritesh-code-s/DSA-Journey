

//               //    Brute force;

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     vector <int> arr(n);

//     for(int i = 0;i < n; i++) {

//         cin >> arr[i];
//     }

//     vector <int> temp;

    
//     for(int i = 0; i < n; i++) {

//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     for(int i = 0;i < temp.size(); i++) {

//         arr[i] =  temp[i];

//     }

//     for(int i = temp.size(); i < n; i++){

//         arr[i] = 0;
//     }

//     for(int i = 0; i < n ; i++) {

//         cout << arr[ i ];
//     }
//     return 0;
// }



       // Optimal approach 

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0;i < n; i++) {

        cin >> arr[i];
    }

    int j = INT_MIN;

    for(int i = 0; i < n; i++) {

        if( arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j + 1; i < n; i++) {

        if( arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++ ) {
        
        cout << arr[i];
    }

}

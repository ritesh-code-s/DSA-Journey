#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Largest element;
    int largest = arr[0];

    for(int i = 0; i < n; i++) {

        if(arr[i] > largest){
             largest = arr[i];
        }
    }

    cout << "lar--->" << largest << endl;

    // second largest;

    int second_largest = INT_MIN;

    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    cout << "Sec_lar -- >" << second_largest << endl;


    // smallest;

    int smallest = arr[0];

    for (int i = 0; i < n; i++ ) {
        if( arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "smallest -- >" << smallest <<  endl;


    // second smallest;

    int second_smallest = INT_MAX;

    for(int i = 0; i < n ; i++) {

        if( arr[i] < second_smallest && arr[i] > smallest ) {

            second_smallest = arr[ i ];
        }
    }

    cout << "sec_smallest --->" << second_smallest << endl;
   

    return 0;

}


// Rearrange_Array_ by there sign if the size numbers of -tive and +tive are diffrent


#include <bits/stdc++.h>
using namespace std;


void Rearrange_Array(vector<int> &arr) {

    int n = arr.size();

    vector<int> positives;
    vector<int> negatives;


    // Store positives and negatives separately
    for(int i = 0; i < n; i++) {

        if(arr[i] > 0) {
            positives.push_back(arr[i]);
        }
        else {
            negatives.push_back(arr[i]);
        }
    }


    // If positives are more;
    
    if(positives.size() > negatives.size()) {

        for(int i = 0; i < negatives.size(); i++) {

            arr[2 * i] = positives[i];
            arr[2 * i + 1] = negatives[i];

        }


        int index = negatives.size() * 2;


        for(int i = negatives.size(); i < positives.size(); i++) {

            arr[index] = positives[i];
            index++;

        }

    }

    else {

        for(int i = 0; i < positives.size(); i++) {

            arr[2 * i] = positives[i];
            arr[2 * i + 1] = negatives[i];

        }


        int index = positives.size() * 2;


        for(int i = positives.size(); i < negatives.size(); i++) {

            arr[index] = negatives[i];
            index++;

        }

    }

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

}


int main() {

    int n;
    cin >> n;


    vector<int> arr(n);


    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }


    Rearrange_Array(arr);


    return 0;
}
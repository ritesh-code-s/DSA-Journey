

            // Brut force


// #include <bits/stdc++.h>
// using namespace std;

// void Matrix_rotate_by_90(vector<vector<int>>& arr) {

//     int n = arr.size();

//     vector<vector<int>> Matrix(n, vector<int>(n));

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < n; j++) {

//             Matrix[j][n - 1 - i] = arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < n; j++) {

//             cout << Matrix[i][j] << " ";
//         }

//         cout << endl;
//     }
// }

// int main() {

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> arr(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < m; j++) {

//             cin >> arr[i][j];
//         }
//     }

//     Matrix_rotate_by_90(arr);
// }


                               // optimal approach


#include <bits/stdc++.h>
using namespace std;

void Matrix_rotate_by_90(vector<vector<int>>& arr) {

    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {

        for(int j = i + 1; j < n; j++) {

            swap(arr[i][j], arr[j][i]);

        }
    }

    for(int i = 0; i < n; i++) {

        reverse(arr[i].begin(),arr[i].end());
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> arr[i][j];
        }
    }

    Matrix_rotate_by_90(arr);
}

#include <bits/stdc++.h>
using namespace std;

void Set_Matrix_zeroes(vector<vector<int>> &arr,int n,int m) {

    int col[m] = {0};
    int row[n] = {0};

    for(int i = 0; i < n; i++ ) {

        for(int j = 0; j < m; j++) {

            if(arr[i][j] == 0) {

                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(row[i] == 1 || col[j] == 1) {

                arr[i][j] = 0;

            }
        }
    }

    for(int i = 0;i < n;i++) {

        for(int j = 0; j < m;j++) {

            cout << arr[i][j] << ".." << endl;
        }
    }



}

int main() {

    int n,m;

    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> arr[i][j];
       }
    }

    Set_Matrix_zeroes(arr,n,m);
}




                         // brute force;

// #include <bits/stdc++.h>
// using namespace std;

// void Three_Sum(vector<int> sum) {

//     set <vector<int>> st;

//     int n = sum.size();

//     for(int i = 0;i < n;i++) {

//         for(int j = i + 1;j < n; j++) {

//             for(int k = j + 1;k < n; k++) {

//                 if(sum[i] + sum[j] + sum[k] == 0) {

//                     vector<int>temp = {sum[i],sum[j],sum[k]};

//                     sort(temp.begin(),temp.end());

//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//     for (auto it : st) {

//         cout << "[ ";

//         for (int x : it) {
//             cout << x << " ";
//         }

//         cout << "]" << endl;
// }

// int main() {

//     int n;
//     cin >> n;

//     vector <int> arr(n);

//     for(int i = 0; i < n; i++) {

//         cin >> arr[i];

//     }

//     Three_Sum(arr);

//     return 0;
// }


                                       // optimal way;

#include <bits/stdc++.h>
using namespace std;

void Three_Sum(vector<int> sum) {

    int n = sum.size();
    vector<vector<int>> ans;

    sort(sum.begin(), sum.end());

    for(int i = 0; i < n; i++) {

        if(i > 0 && sum[i] == sum[i-1]){

            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while(j < k) {

            int addition = sum[i] + sum[j] + sum[k];

            if(addition < 0){

                j++;
            }

            else if(addition > 0) {

                k--;
            }

            else {

                ans.push_back({sum[i], sum[j], sum[k]});

                j++;
                k--;

                while(j < k && sum[j] == sum[j-1])
                    j++;

                while(j < k && sum[k] == sum[k+1])
                    k--;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}
}

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    Three_Sum(arr);

    return 0;
}

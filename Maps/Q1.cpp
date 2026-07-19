#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0;i < n;i++){
        cin >> v[i];
    }

    unordered_map<int,int> mpp;
    for(int i = 0;i < n;i++){
        mpp[v[i]]++;
    }

    int q;
    cin >> q;

    for(int i = 0;i < q;i++){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}

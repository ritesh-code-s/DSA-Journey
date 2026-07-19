#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[26] = {0};
    for(int i = 0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    for(int i=0;i<q;q--){
        char c;
        cin >> c;

        cout << hash[c-'a'] << endl;
    }


}
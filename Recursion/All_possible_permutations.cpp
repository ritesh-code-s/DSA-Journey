#include <bits/stdc++.h>
using namespace std;

void permutations(string &str, int index) {

    if (index == str.size()) {

        cout << str << endl;

        return;
    }

    for (int i = index; i < str.size(); i++) {

        swap(str[index], str[i]);   
           
        permutations(str, index + 1);  
        swap(str[index], str[i]);   
    }
}

int main()
{
    string str;
    cin >> str;

    permutations(str, 0);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void isPalindrome(int x) {

        if (x < 0 || (x % 10 == 0 && x != 0)){

            cout << " False ";
        }

        int rev = 0;

        while (x > rev) {
            
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        cout << (x == rev) || (x == rev / 10);

}



int main() {

    int n;
    cin >> n;

    isPalindrome(121);

}
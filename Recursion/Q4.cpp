#include <iostream>
using namespace std;

int Fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * Fact(n - 1);
    }
}

int main(){
    int n;
    cin >> n;

    cout << Fact(n);
    return 0;
}
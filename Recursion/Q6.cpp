#include <iostream>
using namespace std;

int fib(int n){
    if(n <= 1){
        return n;
    }
    int last =  fib(n - 1);
    int Slast = fib(n - 2);

    return last + Slast;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
}
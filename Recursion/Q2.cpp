#include <iostream>
using namespace std;

void rec(int i,int n){
    if(i < 1){
        return;
    }
    cout << i << endl;
    rec(i-1,n);
}
int main(){
    int n;
    cin >> n;
    rec(n,n);
    return 0;
}
#include <iostream>
using namespace std;

void rec( int i,int n){
    if(i > n){
        return;
    }
    cout << "Light" << endl;
    rec(i+1,n);
}

int main(){
    int n;
    cin >> n;
    rec(1,n);
    return 0;
}

// time complexicity is O(N);


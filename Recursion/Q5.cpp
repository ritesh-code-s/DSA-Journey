// Reverse the array using Recursion;

#include <iostream>
using namespace std;

void rec(int i,int arr[],int n){
    if(i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    rec(i+1,arr,n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i=0;i<n;i++) cout << arr[i];
    
    return 0;
}
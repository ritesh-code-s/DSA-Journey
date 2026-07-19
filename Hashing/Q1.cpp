// Question :-  tell, how many times nubmbers comes or repted or exist in an array ;

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
   for(int i = 0;i < n;i++){
    cin >> arr[i];
   }

   int hash[20] = {0};
   for(int i = 0;i < n;i++){
    hash[arr[i]] += 1;
   }

   int q;
   cin >> q;
   while(q--) {
    int number;
    cin >> number;

    cout << hash[number] << endl;
   }
   

   return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:

    int data;
    Node* next;

    Node(int val) {

        data = val;
        next = NULL;
    }
};

Node* Convert_Arr_to_Linked_List(vector <int> &arr) {

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size();i++) {

        Node* temp = new Node(arr[i]);

        mover->next = temp;

        mover = temp;
    }

    return head;
}


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head =  Convert_Arr_to_Linked_List(arr);

    Node * temp = head;

    while(temp != NULL) {

        cout << temp ->data << " ";
        temp = temp->next;
    }

    return 0;
}
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

Node* Convert_Arr_to_Linked_List(vector<int> &arr) {

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {

        Node* temp = new Node(arr[i]);

        mover->next = temp;
        mover = temp;
    }

    return head;
}

void Search_an_Element(Node* head, int element) {

    while (head != NULL) {

        if (head->data == element) {
            cout << "You got your element: " << head->data;
            return;
        }

        head = head->next;
    }

    cout << "Element is not available";
}

int main() {

    int n;
    cout << "Enter the size of Vector " << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head = Convert_Arr_to_Linked_List(arr);

    int element;
    cout << "Element which u want to search" << endl;
    cin >> element;

    Search_an_Element(head,element);

    return 0;
}
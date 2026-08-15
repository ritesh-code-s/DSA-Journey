#include <bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node* Next;

    Node(int val) {

        data = val;
        Next = NULL;

    }    
};

struct List {


    Node* Head;
    Node* Tail;

    List() {

        Head = Tail = NULL;
    }

    // push front 

    void push_Front(int val) {
        Node* newNode = new Node(val);

        if(Head == NULL) {
            Head = Tail = newNode;
            return;
        }
        else {
            newNode->Next = Head;
            Head =  newNode;
        }
    }

    // push back;

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(Head == NULL) {
            Head = Tail = newNode;
            return;
        }
        else {
            Tail->Next = newNode;
            Tail = newNode;
        }
    }


    // pop front;

    void pop_front() {

        if(Head == NULL) {
            return;
        }

        Node* temp = Head;
        Head = Head->Next;

        temp->Next = NULL;

        delete temp;
    }

    // pop back 
    
    void pop_back() {

        if(Head == NULL) {
            return;
        }

        Node* temp = Head;
        while(temp->Next->Next != NULL) {

            temp = temp->Next;
        }

        temp->Next = NULL;
        delete temp;
        Tail = temp;
    }
    void insert(int val,int pos) {

        if(pos < 0) return;
        if(pos == 0) push_Front(val);

        Node* temp = Head;

        for(int i = 0; i < pos -1; i++) {
            if(temp == NULL) return;
            temp = temp->Next;
        }

        Node* newNOde = new Node(val);
        newNOde->Next = temp->Next;
        temp->Next = newNOde;

    }

    void PrintLL() {

        Node* temp = Head;

        while(temp != NULL) {

            cout << temp->data << " ";
            temp = temp->Next;
        }

        cout << endl;
    }
};


int main() {

    List ll;
    // ll.push_Front(4);
    // ll.push_Front(6);
    // ll.push_Front(8);
    // ll.push_Front(9);
    
    // ll.push_back(10);
    // ll.push_back(11);
    // ll.push_back(12);
    
    // ll.pop_front();
    
    // ll.pop_back();
    
    ll.push_Front(2);
    ll.push_Front(1);
    ll.push_back(3);

    ll.insert(5,2);


    


    ll.PrintLL();
}

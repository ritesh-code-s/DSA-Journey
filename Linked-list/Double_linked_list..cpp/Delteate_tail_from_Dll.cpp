#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int val, Node *next1, Node *back1)
    {
        data = val;
        next = next1;
        back = back1;
    }

    Node(int val)
    {
        data = val;
        next = nullptr;
        back = nullptr;
    }
};

Node *Conver_Arr_to_DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);

        prev->next = temp;
        prev = temp;
    }

    return head;
}

Node *Delete_the_tail(Node *head)
{

    Node *tail = head;
    while (tail != NULL)
    {
        tail = tail->next;
    }

    Node *newNode = tail->back;
    newNode->next = NULL;
    tail->back = NULL;
    delete tail;

    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
}

int main()
{
    int n;

    cout << "Could you enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = Conver_Arr_to_DLL(arr);

    print(head);
}
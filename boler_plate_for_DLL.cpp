#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int val)
    {

        data = val;
        next = NULL;
        back = NULL;
    }

    Node(int val, Node *next1, Node *back1)
    {

        data = val;
        next = next1;
        back = back1;
    }
};

Node *Convert_Arr_to_DLL(vector<int> &arr)
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

void Delete_NOde(Node *temp)
{

    Node *prev = temp->back;
    Node *front = temp->next;

    if (temp->next == NULL)
    {

        prev->next = NULL;
        temp->back = NULL;

        delete temp;
        return;
    }

    prev->next = front;
    front->back = prev;
    temp->back = NULL;
    temp->next = NULL;

    delete temp;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "...";
        head = head->next;
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    Node *head = Convert_Arr_to_DLL(arr);
    Delete_NOde(head->next->next);

    print(head);
}
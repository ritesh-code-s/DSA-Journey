#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *Convert_Arr_to_Linked_List(vector<int> &arr)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {

        Node *temp = new Node(arr[i]);

        mover->next = temp;
        mover = temp;
    }

    return head;
}
Node *Insert_an_element_at_head(Node *head, int element)
{
    Node *temp = new Node(element);
    temp->next = head;
    return temp;
}

void Show(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << "..";

        head = head->next;
    }
    cout << endl;
}
int main()
{

    int n;
    cout << "Enter the size of Vector " << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = Convert_Arr_to_Linked_List(arr);

    int el;
    cout << "Element which u want to insert at head" << endl;
    cin >> el;

    head = Insert_an_element_at_head(head, el);

    Show(head);

    return 0;
}
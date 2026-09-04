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

    Node()
    {
        next = NULL;
    }
};

Node *Convert_Arr_to_LL(vector<int> &arr)
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

Node *Remove_tail_from_LL(Node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;

    return head;
}

void Show_the_LL(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << "...";
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

    Node *head = Convert_Arr_to_LL(arr);
    head = Remove_tail_from_LL(head);
    Show_the_LL(head);
}
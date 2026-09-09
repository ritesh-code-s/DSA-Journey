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

Node *Convert_Arr_to_LL(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

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

Node *Inserting_el_at_end_of_LL(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;

    return head;
}

void Show(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "..";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int el;
    cout << "Enter a value: ";
    cin >> el;

    Node *head = Convert_Arr_to_LL(arr);

    head = Inserting_el_at_end_of_LL(head, el);

    Show(head);
}
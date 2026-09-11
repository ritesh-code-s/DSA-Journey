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

Node *insersation_After_Middle_of_the_LL(Node *head)
{

    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;

        temp = temp->next;
    }

    int mid = cnt / 2;

    temp = head;

    for (int i = 0; i < mid; i++)
    {
        temp = temp->next;
    }

    return temp;
}

void show(Node *head)
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

    cout << "Enter the arr size" << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = Convert_Arr_to_LL(arr);

    head = insersation_After_Middle_of_the_LL(head);
    show(head);
}
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

Node *insersation_at_kth_place(Node *head, int el, int k)
{
    // Empty linked list
    if (head == NULL)
    {
        if (k == 1)
            return new Node(el);

        return head;
    }

    // Insert at first position
    if (k == 1)
    {
        Node *temp = new Node(el);
        temp->next = head;
        return temp;
    }

    int cnt = 1;
    Node *temp = head;

    while (temp != NULL)
    {
        if (cnt == k - 1)
        {
            Node *x = new Node(el);

            x->next = temp->next;
            temp->next = x;

            break;
        }

        temp = temp->next;
        cnt++;
    }

    return head;
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

    int element;
    cout << "Enter a element which u want to insert" << endl;
    cin >> element;

    int pos;
    cout << "Enter the kth pos where u want to insert the element" << endl;
    cin >> pos;

    Node *head = Convert_Arr_to_LL(arr);

    head = insersation_at_kth_place(head, element, pos);

    show(head);
}
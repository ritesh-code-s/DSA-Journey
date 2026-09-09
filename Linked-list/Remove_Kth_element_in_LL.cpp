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

Node *Convert_arr_to_LL(vector<int> &arr)
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

Node *remove_kth_element_From_LL(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;

        delete temp;
        return head;
    }

    int count = 0;
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        count++;

        if (count == k)
        {
            prev->next = prev->next->next;
            delete temp;

            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

void Show_Ji(Node *head)
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
    cout << "Enter the size of arr" << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int k;
    cout << "Which element u want to desire to delete" << endl;
    cin >> k;

    Node *head = Convert_arr_to_LL(arr);
    head = remove_kth_element_From_LL(head, k);
    Show_Ji(head);
}
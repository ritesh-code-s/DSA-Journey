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

Node *Delete_kth_element(Node *head, int K)
{

    Node *Kcont = head;

    int cnt = 0;

    while (Kcont != NULL)
    {
        cnt++;

        if (cnt == K)
        {
            break;
        }

        Kcont = Kcont->next;
    }

    Node *prev = Kcont->back;
    Node *front = Kcont->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }

    if (prev == NULL)
    {
        return NULL;
    }

    prev->next = front;
    front->back = prev;

    Kcont->next = NULL;
    Kcont->back = NULL;

    delete Kcont;

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

    int k;
    cout << "Enter the kth elment";
    cin >> k;

    Node *head = Conver_Arr_to_DLL(arr);
    head = Delete_kth_element(head, k);

    print(head);
}
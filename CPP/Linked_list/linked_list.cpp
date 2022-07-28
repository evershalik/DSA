//  22 --> linked list

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node(val); // a new class object will be formed.
    if (head == NULL)
    {
        head = n; // head will store base address after the execution of this line.
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

bool search(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // temp->data = (*temp).data
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletion(node *&head, int val)
{
    // base case
    if (head == NULL)
        return;

    // to delete at head.
    if (head->data == val || head->next == NULL)
    {
        node *todeletehead = head;
        head = head->next;
        todeletehead->next = NULL;

        return;
    }

    node *temp = head;
    while (temp->next->data != val) // to reach (n-1)th value
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    todelete->next = NULL; // optional
    delete (todelete);     // to reduce memory leakage
}

// reversing linked list by iteration
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr; // it is used for head.
}

// reversing linked list by recursion
node *reverse_by_recursion(node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newnode = reverse_by_recursion(head->next);
    // all node except the first will be reversed;
    head->next->next = head;
    head->next = NULL;
    return newnode; // revrese order
}

node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr; // prevptr will point at head
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
        head->next = reversek(nextptr, k);

    return prevptr;
}

int main()

{
    node *head = NULL; // base node
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 0);
    display(head);
    // cout << search(head, 1) << endl;
    // deletion(head, 3);
    // display(head);
    // deletion(head, 0);
    // display(head);
    // node *reverselist = reverse(head);
    // display(reverselist1);
    // node *reverselist1 = reverse_by_recursion(head);
    // display(reverselist1);

    int k = 2;
    node *reverselistk = reversek(head, k);
    display(reverselistk);

    return 0;
}
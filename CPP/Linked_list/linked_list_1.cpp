

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // stor address of another node;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// insertion
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    head = n;
    n->next = temp;
}

// insert data y after node x;
void inserty(node *&head, int x, int y)
{
    node *n = new node(y);
    node *temp = head;
    while (temp->next->data != x)
    {
        temp = temp->next;
    }
    // node *temp1 = temp->next;
    n->next = temp->next;
    temp->next = n;
}

// delete at begin
void deleteHead(node *&head)
{
    if (head == NULL)
        return;
    else
    {
        node *temp;
        temp = head;
        head = head->next;
        delete (temp);
    }
}

// deletion at tail

void deleteTail(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    node *q;
    while (temp->next != NULL)
    {
        q = temp;
        temp = temp->next;
    }
    q->next = NULL;
    delete (temp);
}

// Alternative
/*
void deleteTail1(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    // node *q;
    while (temp->next->next != NULL)
    {
        // q = temp;
        temp = temp->next;
    }
    node *q = temp->next;
    temp->next = NULL;
    delete (q);
}
*/

// deletion

void deletion(node *&head, int key)
{
    node *temp = head;
    node *q;
    while (temp->data != key && temp->next != NULL)
    {
        q = temp;

        temp = temp->next;
    }

    if (temp->data == key)
    {
        q->next = temp->next;
        delete (temp);
    }
}

// Insert at tail
void insertion(node *&head, int val)
{
    node *n = new node(val); // new node with data as val;
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty!" << endl;
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *findNode(node *head, int x)
{
    if (head == NULL)
        return 0;
    else
        while (head != NULL && head->next != NULL)
        {
            head = head->next;
            if (head->data == x)
            {
                return head;
            }
        }
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp->data != key and temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->data == key)
        return true;
    else
        return false;
}

void* reverse(node* &head)
{
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        
    }
    
}

int main()

{
    system("cls");
    node *head = NULL;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    display(head);
    // insertAtHead(head, 0);
    // inserty(head, 3, 6);
    // display(head);
    // deleteHead(head);
    // display(head);
    // deleteTail(head);
    // display(head);
    // deletion(head, 3);
    // display(head);
    // cout << findNode(head, 3) << endl;/
    // display(head);
    // cout << search(head, 4);


    return 0;
}
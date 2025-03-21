#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        cout << "\n call for this constructor - >" << this->data << endl;
    }
};

int lengthLL(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
void deleteNode(Node *&head, Node *&tail, int pos)
{
    int len = lengthLL(head);
    if (pos == 1)
    {
        // delete from head
        if (head == NULL)
        {
            cout << "\nCan not perform delete operation coz ll is empty\n";
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
   
   else if (pos == len )
    {
        // delete from tail

        if (head == NULL)
        {
            cout << "\nCan not perform delete operation coz ll is empty\n";
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
    }
    else
    {
        // delete in between head or tail
        Node*curr = head;
        Node*prev = NULL;
        while (pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = curr->next;
        curr->prev = NULL;
        curr->next->prev = prev;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
  

    cout << "Printing LL before deleting node\n\n";
    
    printLL(head);
    
    // delete from head 
    deleteNode(head,tail,1);
    
    cout << "Printing LL after deleting node\n\n";

    printLL(head);
    return 0;
}
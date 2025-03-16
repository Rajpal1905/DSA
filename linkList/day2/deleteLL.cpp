#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node ( ){
        cout<<"contructor called for "<<this->data<<endl;
    }
};

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int llLength(Node *&head)
{
    Node*temp = head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        cout << "Can not perform delete operation becaouse Link list is empty ";
    }
    // delete from head
    if (pos == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    int length = llLength(head);

    if (pos == length)
    {
        Node*temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        // isolate last ptr 
        temp->next = NULL;
        
        // delete last node 
        delete tail;

        // new tail in the scene
        tail = temp;

    }
    else {
        Node *prev = NULL;
        Node * curr = head;
        while (pos != 1)
        {
           prev = curr;
           curr = curr->next;
           pos--;
        
        }
         prev->next = curr->next;
         curr->next = NULL;
         delete(curr);
        
    }
    

}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    Node *tail = fifth;

    cout << "Printing LL : ";

    printLL(head);

    // cout << "\n\n deleting from head \n\n";
    // deleteNode(head, tail,1 );
    // printLL(head);


    cout << "\n\n deleting from tail \n\n";
    int len = llLength(head);
    deleteNode(head, tail,3 );
    printLL(head);


    return 0;
}
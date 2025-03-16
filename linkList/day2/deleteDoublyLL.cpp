#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(){
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int lengthLL(Node*&head)
{
    Node*temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void printLL(Node*&head){
    Node*temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

void insertAtHead(Node*&head,Node*&tail,int data){
    
    if (head == NULL)
    {
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node*newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node*&head,Node*&tail,int data){
    
    if (head == NULL)
    {
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node*newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
void deleteNode(Node*&head , Node*&tail , int pos){
    if(pos == 1){
        //delete from head
    }
}
int main(){
    Node*head = NULL;
    Node*tail = NULL;
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,90);
    
    cout<<"Printing LL before deleting node\n\n";

    printLL(head);



    return 0;
}
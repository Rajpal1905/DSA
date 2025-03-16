#include<iostream>
using namespace std;

class Node {
    public :

    int data;
    Node*prev;
    Node*next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void printLL(Node*&head ){
    Node*temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"->"; 
        temp = temp->next;
    }
}
void insertAtTail(Node*&head , Node*&tail , int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtHead(Node*&head,Node*&tail, int data){
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node *newNode = new Node(data); 
        newNode->next = head;
        head->prev = newNode; 
        // cout<<newNode<< " ---- " <<newNode->next<<endl;
        // head->prev = newNode->next;
        head = newNode;
    }
    
}

void insertAtMiddle(Node*&head, Node*&tail,int data, int position){
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        Node*prev = NULL;
        Node* curr = head; 
        while (position!=1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }
        prev->next = newNode;
        newNode->prev = prev;
        curr->prev = newNode;
        newNode->next = curr;  
        
    }
}
int main(){
    Node*head = NULL;
    Node*tail = NULL;
    insertAtHead(head, tail,10);
    insertAtHead(head ,tail,20);
    insertAtHead(head ,tail,30);
    insertAtTail(head,tail , 60);
    insertAtMiddle(head,tail,12,2);
    printLL(head);   
    return 0;
    
}
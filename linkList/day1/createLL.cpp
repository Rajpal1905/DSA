#include<iostream>

using namespace std;

class Node {
    public:

    int data ;
    Node *next;

    Node(){
        cout<<"inside default constructor";
        this->next = NULL;
    }
    Node(int data){
        // cout<<"Inside parameterized constructor "<<endl;
        this->data = data;
        this->next = NULL;
    }
    
};


void printingLL(Node* head){
    Node*temp = head;
    int count  = 0; 
    while (temp!= NULL)
    {
        cout<<temp->data << "->";
        temp = temp->next;
        
    }
}

int  lenOfLL (Node *head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next ;
    }   
    return count;
}

// void insertAtHead(Node* &head , int data){


//     // create a new node 
//     Node*newNode = new Node(data) ;

//     // attach new node 
//     newNode->next = head;

//     // transfer head to new node 
//     head  = newNode;
// }

void insertAtHead(Node* &head,int data){
    if(head == NULL){
        Node*newNode = new Node(data);
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void inserAtTail(Node* &tail , int data){
    if(tail == NULL){
        Node*newNode = new Node(data);
        tail = newNode;
    }
    else { 
        Node* newNode = new Node (data);
        tail->next = newNode;
        tail = newNode;
        
    }
    
}


void insertAtGivenPosition(Node*&head ,Node*&tail , int data ,int pos ){

    int length = lenOfLL(head);

    if(pos >= length +1 ){
        inserAtTail(tail , data);
    }
    else if (pos <= 1)
    {
        insertAtHead(head, data);
    }
    else{
        Node * newNode = new Node(data);
        Node * prev = NULL;
        Node * curr = head;
        while(pos != 1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = newNode;
        newNode->next = curr;
    }
    
}
int main(){
    // Node a; //static node 

    Node*first = new Node(10);  // dynamic constructor
    Node*second = new Node(20);  
    Node*third = new Node(30);  
    Node*fourth = new Node(40);  
    Node*fifth = new Node(50);  
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    Node*head = first;
    Node*tail = fifth;
    cout<<"Printing LL "<<endl;

    printingLL(head);

    // lenOfLL(head);
    // insertAtHead(head ,8);
    // cout<<"\n\n\nAfter insert at head\n\n\n";
    // printingLL(head);
    // cout<<"\n\n\n after inserting at tail\n\n\n";

    // inserAtTail(tail ,300 );
    // printingLL(head);

    cout<<"\n\n inerting at give \n\n ";

    insertAtGivenPosition(head ,tail , 69 ,5 );


    printingLL(head);



   return 0; 
}
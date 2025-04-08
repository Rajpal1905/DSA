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

    void reverseLL(Node* &head){
       Node* prev = NULL;
       Node*curr = head;
       while (curr!=NULL)
       {
        Node*temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
       }
        head = prev;
    }

     void sortColor(Node*&head){

        Node*zeros = NULL;
        Node*ones = NULL;
        Node*twos = NULL;
        Node*zdummy = zeros;
        Node*tdummy = twos;
        Node*odummy = ones;

        Node*curr = head;
        if(head == NULL){
            cout<<"Linked list is empty";
            return ;
        }
        while (curr != NULL)
        {
            if(curr->data == 0){
                zeros->next = curr;
                zeros = zeros->next;
            }
            if(curr->data == 1){
                ones->next = curr;
                ones = ones->next;
            }
            if(curr->data == 2){
                twos->next = curr;
                twos = twos->next;
            }
            curr = curr->next;  
        }
        zeros->next = odummy->next;
        ones->next = tdummy->next;

        printingLL(odummy->next) ;
        
     }

int main(){
    // Node a; //static node 

    Node*first = new Node(0);  // dynamic constructor
    Node*second = new Node(2);  
    Node*third = new Node(0);  
    Node*fourth = new Node(1);  
    Node*fifth = new Node(0);  
    Node*six = new Node(2);  
    Node*seven = new Node(1);  
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = seven;
    
    Node*head = first;

    printingLL(head);   
    sortColor(head);




   return 0; 
}   
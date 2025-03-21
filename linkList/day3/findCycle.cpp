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

    void findCycle(Node*head){
        Node*slow = head;
        Node*fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast !=NULL )
            {
                fast = fast->next;
                slow = slow->next;
            }
            if (slow==fast)
            {
                cout<< "There is a cycle";
                return ;
            }
            
        }
        cout<<"No cycle";
        return ;
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
    fifth->next = third;
    
    Node*head = first;
    Node*tail = fifth;


    findCycle(head);




   return 0; 
}
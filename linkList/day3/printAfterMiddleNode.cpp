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

Node* middleElem(Node* head){
    Node*slow = head;
    Node*fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;

}

int main(){
    
    Node*head = NULL;
    insertAtHead(head , 5);
    insertAtHead(head , 4);
    insertAtHead(head , 3);
    insertAtHead(head , 2);
    insertAtHead(head , 1);

    printingLL(head);

    cout<<head->data <<" : before";
    
    
    head = middleElem( head);
    
    cout<<head->data <<" : after";
    
    printingLL(head);
     

   return 0; 
}
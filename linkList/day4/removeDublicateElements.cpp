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


   void deleteDuplicates(Node* head) {
        Node* dummy = new Node(-101);
        Node* temp = dummy;
        Node* curr = head;
        Node* prev = new Node(-102);

        if (head == NULL) {
            cout<<"head is NULL";
            return ;
        }
        while (curr != NULL) {
            if (curr->data != prev->data) {
                temp->next = curr;
                temp = temp->next;
            }
                prev = curr;
                curr = curr->next;
            
        }
       temp->next = NULL;
       printingLL(dummy->next);
    }

int main(){


    Node*first = new Node(10);  // dynamic constructor
    Node*second = new Node(20);  
    Node*third = new Node(20);  
    Node*fourth = new Node(20);  
    Node*fifth = new Node(30);  
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    Node*head = first;
    Node*tail = fifth;

    deleteDuplicates(head);

   return 0; 
}
#include<iostream>

using namespace std;

class implementation_deque
{
    public : 
    int *arr;
    int size;
    int front;
    int rear;

    implementation_deque(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }


    void push_front(int x){

        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = x;
        }
        else if ((front ==0 && rear == size - 1 ) || (rear == front - 1))
        {
          cout<< "Overflow \n";  
        }
        else if (front == 0 && rear < size-1)
        {
            front = size-1;
            arr[front] = x;
        }
        
        else{
            front--;
            arr[front] = x;
        }
        
    }


    void push_back(int x){
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = x;
        }
        else if (rear == size - 1 && front > 0)
        {
            rear = 0;
            arr[rear] = x;   
        }   
        else if ((front ==0 && rear == size - 1 ) || (rear == front - 1))
        {
          cout<< "Overflow \n";  
        }
        else{
            rear++;
            arr[rear] = x;
        } 
    }
    void pop_front(){
        if (front == -1 && rear == -1)
        {
           cout<<"underflow\n";
           return;
        }
        
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if (front == size-1 )
        {
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }
    void pop_back(){
        if (front == -1 && rear == -1)
        {
           cout<<"underflow\n";
           return;
        }
        
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if (rear == 0 )
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }   
    }
    void getAll(){
        for (int  i = 0; i < size; i++)
        {
            cout<< arr [i] << " " ;
        }
        cout<<endl;
    }
    void getFront(){
        cout <<"front : " <<arr[front]<<endl;
        return;
    }
    void getRear(){
        cout <<  "Rear : "<< arr[rear]<<endl;
        return;
    }
};

int main(){
    implementation_deque q(5);

    // ------------------  testing while inplementation ----------------

    // q.push_front(10);
    // q.push_front(20);
    // q.push_front(30);
    // q.push_front(40);
    // q.push_front(50);
    // // q.push_front(50);
    // q.getAll();
    // q.getFront();
    // q.getRear();

    // q.pop_front();
    // q.pop_front();
    // q.pop_front();
    // q.pop_front();
    // q.pop_front();
    // q.pop_front();


    // q.pop_back();
    // q.pop_back();
    // q.pop_back();
    // q.pop_back();
    // q.pop_back();
    // q.pop_back();
    

    // -----------------  push pop Testing 
    // q.push_back(100);
    // q.push_back(90);

    // q.push_front(10);
    // q.push_front(20);

    // q.push_back(500);

    // q.push_front(500000); // overflow condition check

    // q.getFront();
    // q.getRear();

    // q.pop_back();
    // q.pop_back();

    // q.pop_front();
    // q.pop_front();
    // q.pop_front();



    
    q.getAll();
    return 0 ;
    
}

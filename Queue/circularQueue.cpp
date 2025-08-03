#include<iostream>

using namespace std;

class circularQueue
{
    public:
    int *arr ;
    int size;
    int front;
    int rear;
    
    circularQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data){
       if (front == -1 && rear == -1)
       {
            front++;
            rear++;
            arr[rear] = data;
       }
        else if((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Overflow\n";
            return;
        }
        
        else if (rear == size-1 && front > 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
        
    }


    void pop(){
        
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
    void getAll(){
        cout<<endl;
        
        for (int  i = 0; i < size; i++)
        {
            cout << arr[i] <<" ";
        }

         cout<<endl;
        
    }
};


int main(){

    circularQueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6); 
    q.getAll();

    q.pop();
    q.pop();
    q.getAll();

    q.push(5);
    q.push(6);
    q.push(2);

    q.getAll();


    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.getAll();



    return 0;

}
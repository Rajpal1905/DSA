#include <iostream>

using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }

    void push(int data)
    {
        if (rear == size - 1)
        {
            cout<<"Overflow!! - can not perform push operation on this data : "<<data<<endl;
        }
        else if(front == -1 && rear == -1){
            rear++;
            front++;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if ( front == -1 && rear == -1)
        {
            cout<<"Underflow condition - can not perform pop operation\n";
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        } 
    }

    int getfront(){
        cout<<"\n Front elem is  : " ;
        return arr[front];
    }
    int getrear()
    {
        cout<<"\n Rear elem is : ";
         return arr[rear];
    }

    int getsize(){
        cout<<"\nsize of the Queue is : ";
        if (rear == -1 && front == -1)
        {
            
            return 0;
        }
        
        return (rear - front  + 1);
    }

    void getAll(){
        cout<<endl;
        cout<<"front : "<<front << " Rear : "<<rear <<endl;
        cout<<"\nAll elems are : -> ";
        for (int  i = 0; i < size; i++)
        {
            cout << arr[i] <<" ";
        }
        
    }
};

int main()
{
    Queue Q(8);

    
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.push(6);
    Q.push(7) ;
    Q.push(8) ;
    
    //------------  Check overflow condition ---------------
    // Q.push(8) ;
    
    
    Q.getAll();
    
    
    Q.pop();
    Q.pop();
    Q.pop();
    Q.pop();
    Q.pop();
    Q.pop();
    Q.pop();

    cout<<Q.getsize()<<endl;
    // Q.pop();
   cout<< Q.getfront();
   cout<< Q.getrear();


    // -----------------     check underflow condition    --------------------

    // Q.pop();
    Q.getAll();

    // Again checking that does elem appears at starting position or not
    
    // Q.push(11); // Done
    

    Q.getAll();
    

    return 0 ;
}
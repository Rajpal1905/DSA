#include<iostream>

using namespace std;

class Stack{

    public :

    int *arr;
    int size;
    int top;

    Stack(int data){
        arr = new int[size];
        this->top = -1;
        this->size = size;
    }
    void push(int data){
        if(top == size-1){
            cout<<"Stack overflow Condition";
            return ;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Underflow condition satisfied , cannot perform pop";
            return;
        }
        else top--;
    }

    void isEmpty(){
        if (top == -1)
        {
            cout<<"Stack is empty";
            return;
        }
        else{
            cout<<"Stack is not empty";
            return;
        }
        
    }

    int getSize(){
        return top+1;
    }

    int getTop(){
        if(top == -1){
            cout<<"Empty Stack";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    void print(){

        cout<<"Top  : "<<top<<endl;
        cout<<"Top Element : "<<arr[top]<<endl;
        cout<<"Stack : ";
        for (int i = 0; i < getSize(); i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl<<endl;
    }
};


int main(){

    Stack st(6);

    st.push(13);
    st.push(12);
    st.push(11);

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    return 0;
}


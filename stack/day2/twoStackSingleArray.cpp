#include<iostream>
using namespace std;

class stack
{
    public:

    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }
    void push1(int data){
        if (top2 - top1 == 1)
        {
            cout<<endl<<"Overflow"<<endl;
            return;
        }
        else{
            top1++;
            arr[top1] = data;
        }
        
        
    }
    void push2(int data){
        if (top2 - top1 == 1)
        {
            cout<<endl<<"Overflow"<<endl;
            return;
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }
    void pop1(){
        if(top1 == -1){
            cout<<endl<<"Underflow"<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }

    }
    void pop2(){
        if(top2 == size){
            cout<<endl<<"Underflow"<<endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }

    }
    void printSt(){
        cout<<endl;
        cout<<" top 1 at "<<top1 <<" : "<<arr[top1]<<endl;
        cout<<" top 2 at "<<top2 <<" : "<<arr[top2]<<endl;
        for (int i = 0; i < size; i++)

        {
            //preventing garbage value
            if (top1 == -1 && top2 == size)
            {
                arr[i] = 0;
            }

            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

    
};
int main(){
    stack st(6);
    st.printSt();

    st.push1(10);
    st.printSt();

    st.push1(20);
    st.printSt();

    st.push2(200);
    st.printSt();

    st.push2(300);
    st.printSt();

    st.push2(400);
    st.printSt();

    st.push2(500);
    st.printSt();

    // condition satisfy or not

    st.push1(5000);

    st.pop1();
    st.printSt();

    st.pop1();
    st.printSt();
    

    st.pop2();
    st.printSt();

    st.pop2();
    st.printSt();
    
    st.pop2();
    st.printSt();

    
    st.pop2();
    st.printSt();

    return 0;
}

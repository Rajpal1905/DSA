#include <stack>
#include <iostream>

using namespace std;

void insertAtBottom(stack<int> &st, int elem){

    if(st.empty()){
        st.push(elem);
        return;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st, elem);
    st.push(temp);

}
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,temp);
}
void printingStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int size = st.size();
    cout<<"original stack : ";
    printingStack(st);
    if (size == 0){
       cout << "stack is empty, can't find middle element";
    }
    else
    {
        reverseStack(st);
    }

    cout<<"Stack after reverse : ";
    printingStack(st);

    return 0;
}

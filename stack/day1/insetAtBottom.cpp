#include <stack>
#include <iostream>

using namespace std;

void insertAtBottom(stack<int> &st, int size, int elem){

    if (size == 0){
        st.push(elem);
        return;
    }
    size--;
    int temp = st.top();
    st.pop();
    insertAtBottom(st, size, elem);
    st.push(temp);

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
        insertAtBottom(st, size,700);
    }

    cout<<"Stack after inserting : ";
    printingStack(st);

    return 0;
}

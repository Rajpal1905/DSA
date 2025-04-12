#include <stack>
#include <iostream>

using namespace std;

void sortedInsert(stack<int> &st, int elem){

    if (st.empty() || elem > st.top()){
        st.push(elem);
        return;
    }
    int temp = st.top();
    st.pop();
    sortedInsert(st, elem);
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
        sortedInsert(st, 23);
    }

    cout<<"Stack after inserting : ";
    printingStack(st);

    return 0;
}

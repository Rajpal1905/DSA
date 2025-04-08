#include<stack>
#include<iostream>

using namespace std;

int main(){
    stack<int> st;
    st.push(12);
    st.push(113);
    st.push(121);
    st.push(1);
    
    cout<<"Top element in Stack "<<st.top()<<endl;

    cout<<"Size of stack: "<<st.size();

    st.pop();

    if(st.empty()){
        cout<<"\n Stack is empty\n";
    }
    else{
        cout<<endl<<"Stack is not empty\n";
    }

    cout<<"Top element in Stack "<<st.top();

    return 0;
}
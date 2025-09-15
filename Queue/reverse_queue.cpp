#include<iostream>
#include<queue>
#include<stack>

using namespace std;

// using recursion 

void reverseQ(queue<int>&q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    reverseQ(q);
    q.push(temp);
} 

// using stack 

void jingaLalaHuhu(queue<int>&q){
    stack<int>st;
    while (!q.empty())
    {
        int top = q.front();
        st.push(top);
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    
    

}


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // cout<<q.front();

    // reverseQ(q);

    jingaLalaHuhu(q);

    while (!q.empty())
    {
        int top = q.front();
        cout<<top << " ";
        q.pop();
    }
    

    return 0;
}
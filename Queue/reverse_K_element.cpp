#include<iostream>
#include<queue>
#include<stack>

using namespace std;





void reverseKElem(queue<int>&q ,  int k){
    stack<int>st;
    int n =  q.size();
    int asli_k = k;
    while (k)
    {
        int top = q.front();
        st.push(top);
        q.pop();
        k--;
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < (n-asli_k); i++)
    {
        int front = q.front();
        q.push(front);
        q.pop();
    }

}


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
  

    reverseKElem(q , 2);

    while (!q.empty())
    {
        int top = q.front();
        cout<<top << " ";
        q.pop();
    }
    

    return 0;
}
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string str = "Rajpal";
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        st.push(str[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
    
}
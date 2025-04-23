#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string &str){
    
    stack<char> st;
   for(char ch : str)
    {
        if (!st.empty() &&
            ((st.top() == '(' && ch ==  ')') || 
            (st.top() == '[' && ch == ']') ||
            (st.top() == '{' && ch == '}')))
        {
            st.pop();
        }
        else{
            
            st.push(ch);
        }
       
    }
    return st.empty();
}


int main(){

    string str = "{(){[()]}}";

    bool res = isValid(str);
    cout<<"res : "<<res;
    if(res){
        cout<<"This is valid";
    }else{
        cout<<"not Valid";
    }
    return 0;

}
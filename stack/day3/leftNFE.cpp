#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void findLeftFirstSmallestElem(int *arr , int size){
    vector<int> ans(size);

    stack<int> st;
    st.push(-1);
    for (int i = 0 ; i <size; i++)
    {
        int currElem = arr[i];
        while (st.top()>= currElem)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(currElem);
    }   
    
    for (int i = 0; i < ans.size(); i++)
    {
       cout<< " "<< ans[i];
    }
    
}
int main(){
    int arr[] = {1, 6, 2};
    int size = 3;
    findLeftFirstSmallestElem(arr,size);
    return 0;
}
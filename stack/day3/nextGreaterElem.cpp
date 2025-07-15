#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void NGE(int arr[], int size) { 
    vector<int>ans(size,-1);
    stack<int>st;
    for(int i = size -1 ; i >= 0 ; i--){
        int currElem = arr[i];
        // poping
        while (!st.empty()  && st.top() <= currElem)
        {
            st.pop();
        }
        // pushing
        if (!st.empty() )
        {
            ans[i] = st.top();
        }
        st.push(currElem);
    }
    
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< " "<< ans[i];
       
    }
}

int main() { 
    int arr[] = {0,2,0};
    int size = 3;
    NGE(arr,size);

    return 0;
}
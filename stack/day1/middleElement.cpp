#include <stack>
#include <iostream>

using namespace std;

void findElement(stack<int> &st, int &ans, int pos)
{
    if (pos == 1)
    {
        ans = st.top();
        return;
    }

    pos--;
    int temp = st.top();
    st.pop();
    findElement(st, ans, pos);
    st.push(temp);
}
int findMiddle(stack<int> &st, int &size)
{
    int pos = -1;
    if (size & 1)
    {
        pos = size / 2 + 1;
    }
    else
    {
        pos = size / 2;
    }
    int ans = -1;
    findElement(st, ans, pos);
    return ans;
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int size = st.size();
    if (size == 0)
    {
        cout << "stack is empty, can't find middle element";
    }
    else
    {
        int res = findMiddle(st, size);

        cout << "result : " << res;
    }

    return 0;
}

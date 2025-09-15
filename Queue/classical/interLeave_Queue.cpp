#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int>q;
    queue<int>q1;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    int n = q.size() / 2;
   
    while (n)   
    {
        q1.push(q.front());
        q.pop();
        n--;   
    }
    while (!q1.empty())
    {
        q.push(q1.front());
        q.push(q.front());
        q1.pop();
        q.pop();
    }
    
    while (!q.empty())
    {
        cout<<q.front() << " ";
        q.pop();
    }

    return 0;
}
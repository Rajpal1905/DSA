#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>dq;
    dq.push_front(10);
    // dq.push_front(20);
    // dq.push_front(30);

    // dq.push_back(100);

    // dq.pop_front();
    // dq.pop_front();
    // dq.pop_front();

    cout<<dq.back() <<endl;
    cout<<dq.front()<<endl;

    
    dq.pop_back();

    return 0;
}
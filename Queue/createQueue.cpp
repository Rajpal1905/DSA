#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> Q;
    Q.push(5); 
    Q.push(4); 
    Q.push(6); 
    cout<<Q.front() <<endl;
    cout<<Q.back()<<endl;
    
    Q.pop();
    
    cout<<Q.front() <<endl;
    
    cout<<"Size of this queue is :  "<<Q.size()<<endl ;

    cout<<!Q.empty() <<endl;
    Q.emplace(1);
    Q.emplace(2);
    Q.emplace(3);
    Q.emplace(3);
    Q.push(3);
    while (!Q.empty()) 
    {
        cout << ' ' << Q.front();
        Q.pop();
    }
    return 0;
}
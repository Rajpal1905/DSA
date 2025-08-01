#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int star = 0; star <= i; star++)
        {
           cout<<"* ";
        }
       cout<<endl; 
    }
    for (int i = 0; i < 4; i++)
    {
        for (int star = 0; star < 4-i; star++)
        {
           cout<<"* ";
        }
       cout<<endl; 
    }
    
    return 0;
}
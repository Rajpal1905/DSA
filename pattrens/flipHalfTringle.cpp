#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5 ; i++)
    {
        for (int space = 0; space < 5 - i - 1; space++)
        {
            cout<<"  ";
        }
        for (int star = 0; star < i+1; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 0; i < 4 ; i++)
    {
        for (int space = 0; space < i+1; space++)
        {
            cout<<"  ";
        }
        for (int star = 0; star < 4 - i; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
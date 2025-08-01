#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int space = 0; space < i; space++)
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
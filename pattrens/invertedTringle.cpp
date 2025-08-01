#include<iostream>

using namespace std;

int main(){
    for (int  i = 0 ; i < 5; i++)
    {
       for (int space = 0; space < i; space++)
       {
        cout<< " ";
       }
       for (int star = 0; star <= 5 - i -1; star++)
       {
            cout<< "X ";
       }
       
        cout<<endl;
        
    }
    
    return 0;
}
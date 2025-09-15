#include<iostream>

using namespace std;

int main(){
    // int const x = 20;

    // x = 90 ---->  expression must be a modifiable lvalue
    
    // const int *a = new int(20);

    // now i want to change the value at "a" 

    // int n = 90;

    // a = &n;
    // cout<<*a;

    int *const a = new int (90);
    cout<<a<<endl;
    int b = 30;
    *a = b;
    cout<< *a <<endl;


    return 0;
}
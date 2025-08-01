#include<iostream>

using namespace std;

int main(){
    for (int  i = 4 ; i > 0; i--)
    {
        for (int j = 1 ; j <=  4; j++)
        {
            if(j>=i){
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}

// #include<iostream>

// using namespace std;

// int main(){
//     for (int  i = 0 ; i < 4; i++)
//     {
//         for (int space = 0 ; space < 4 - i + 1; space++)
//         {
//            cout<< " ";
//         }
//         for (int star = 0; star < i+1 ; star++)
//         {
//             cout<<"* ";
//         }
        
//         cout<<endl;
        
//     }
    
//     return 0;
// }
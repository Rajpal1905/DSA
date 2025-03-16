#include <iostream>

using namespace std;

//***   Print name 5 times   */

// void recursion_fn(int n , int index){
//     if (index == n)
//     {
//         return;
//     }
//     cout<<" Raj this side "<<index <<endl;
//     recursion_fn(n , index + 1);
// }

// *******printing 1 to N linear*******

// void recursion_fn(int n, int index)
// {
//     if (index == n+1)
//     {
//         return;
//     }
//     cout <<index<<endl;
//     recursion_fn(n , index + 1);

// }

// ******* printing from n to 1
// void recursion_fn(int n , int index){

//      cout<<n<<endl;
//         if (n == index)
//      {
//          return;
//      }
//      recursion_fn(n-1, index);
// }

// ***** printing linear from 1 to n

void recursion_fn(int n, int index)
{

    if (index == n+1)
    {
        return;
    }
    recursion_fn(n , index+1  );
    cout<<index<<endl;
}

int main()
{
    int n = 5;
    //  cout<< "Printing 1 to "<<n<<endl;

    //  cout<< "Printing "<<n <<" to 1 "<<endl;

    recursion_fn(n, 1);
}
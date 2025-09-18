#include <iostream>


using namespace std;

// class Student{
//     //by default all the identities are private
//     private:
//     string GFName;

//     public: 
//     int id;
//     string name;
//     int age;

//     void study(){
//         cout<<"studing";
//     }

//     void sleep(){
//         cout<<"sleeping";
//     }

//     void bunk(){
//         cout<<"Bunking";
//     }


// } ;

// int main(){
//     Student s1;
//     s1.age = 11;
//     s1.bunk();
//     //heren you can see that no any protective item/indentifier show after apllying dot 
 
//     return 0;
// }



// Problem -> 1 : 

    // now  suppose you have to make 100 or 10000 students then there is the concept of " Constructor "


    


class Student{
    public: 
    int age;
    int nos;
    string name;
// default cTR
    Student(){

    }

    // parameterise cTR
    Student(int _age , int _nos, string _name){
        age = _age;
        nos = _nos;
        name = _name;
    }
};

int main(){
    Student s1(23,5,"Raj");
    cout<<s1.age;
    return 0;
}
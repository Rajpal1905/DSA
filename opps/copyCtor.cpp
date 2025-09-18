#include<iostream>
#include<string>

using namespace std;



class Student {
    public : 

    int age ;
    int rollNo;
    string name;
    Student(){
        cout<<"Default Ctor is called\n";
    }

    Student(int age, int rollNo, string name){
        this->age = age;
        this->name = name;
        this->rollNo = rollNo;
    }

    Student( const Student & srcObj){
        cout<<"copy Ctor is calling\n";
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->rollNo = srcObj.rollNo;
    }

    void studing (){
        cout<<"Student do study "<<endl;
    }
};


int main(){
    Student s1 (19 , 14, "Raj");

    Student s2;
    s2 = s1;
    cout<<s1.name <<endl;
    cout<<s2.name<<endl;


    return 0;
}
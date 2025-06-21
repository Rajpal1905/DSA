#include<iostream>

using namespace std;

class Student{
    public: 

    int id;
    string name;
    float gpa;
    string email;
    int age;
    bool isGraduated;
    int *v;
Student(){

    cout<<"\ndefault Ctor is caleld\n";

}
    Student(int studentId, string studentName, float studentGpa, string studentEmail, int studentAge) {
        cout<<"\nparameterized ctor is called\n";
        id = studentId;
        name = studentName;
        email = studentEmail;
        isGraduated = false;
        
    }

    Student(const Student & srcObj){
        cout<<"\ncopy Ctor is called\n";
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->isGraduated = srcObj.isGraduated;
        this->gpa = srcObj.gpa;
        this->email = srcObj.email;
        this->id = srcObj.id;
        this->v = new int(20);
    }
    // suppose default Dtor 
    // ~Student(){
    //     cout<<"\n dtor is called \n";
    // }

    // here we can secure memory leak 
    ~Student(){
        cout<<"\n dtor is called \n";
        delete v;
    }

};

int main(){
   {
       Student s1(1,"raj",7.1,"pal511101@gmail.com",24);
} 
    

    Student s2;

    return 0;
}
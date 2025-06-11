#include<iostream>
#include<string>
using namespace std;

class Student {
public: 

    int id;
    string name;
    float gpa;
    string email;
    int age;
    bool isGraduated;

Student(){

}
    Student(int studentId, string studentName, float studentGpa, string studentEmail, int studentAge) {
        id = studentId;
        name = studentName;
        email = studentEmail;
        isGraduated = false;
    }

    Student(const Student & srcObj){
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->isGraduated = srcObj.isGraduated;
        this->gpa = srcObj.gpa;
        this->email = srcObj.email;
        this->id = srcObj.id;

    }

};

int main() {
    // Create some student objects
    Student student1(1001, "Alice Johnson", 3.8, "alice@university.edu", 20);
    Student student2(1002, "Bob Smith", 3.2, "bob@university.edu", 21);
    Student student3(1003, "Charlie Brown", 2.9, "charlie@university.edu", 22);
    Student s4;
    s4 = student1;

    cout<<s4.name;
    

    return 0;
}
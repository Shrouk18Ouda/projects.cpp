#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int grade;
};
int main()
{
    Student ob1;
    Student ob2;
    Student ob3;
    ob1.name="shrouk";
    ob1.age=20;
    ob1.grade=60;
    cout<<"name: "<<ob1.name<<endl;
    cout<<"age: "<<ob1.age<<endl;
    cout<<"grade: "<<ob1.grade<<endl;
}
//in cpp can say student s and can say define typedef also.
#include<iostream>
using namespace std;
typedef struct student
{
    int age;
    string name;
    float gpa;
}stu;
int main()
{
    stu s;
    s.age=19;
    s.name="shrouk";
    s.gpa=3.5;
    cout<<s.age<<" "<<s.name<<" "<<s.gpa<<endl;
    student s1;
    s1.age=16;
    s1.name="shahd";
    s1.gpa=3;
    cout<<s1.age<<" "<<s1.name<<" "<<s1.gpa<<endl;
}
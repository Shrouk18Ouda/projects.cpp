#include<iostream>
using namespace std;
struct student
{
    int age;
    string name;
    float gpa;
};
struct student s={19,"shrouk",3.5};
int main()
{
    struct student *ptr;
    ptr=&s;
    cout<<s.age<<" "<<s.name<<" "<<s.gpa<<endl;
    cout<<ptr -> age<<" "<<ptr -> name<<" "<<ptr -> gpa<<endl;
    cout<<(*ptr).age<<" "<<(*ptr).name<<" "<<(*ptr).gpa<<endl;
    cout<<&s.age<<" "<<&s.name<<" "<<&s.gpa<<endl;
    cout<<sizeof(int)<<" "<<sizeof(string)<<endl;
    cout<<sizeof("shrouk")<<endl;
    cout<<sizeof(19)<<endl;
}
#include<iostream>
using namespace std;
struct student
{
    int age;
    string name;
    float gpa;
};
struct student s[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        cin>>s[i].age>>s[i].name>>s[i].gpa;
    }
    for(i=0;i<3;i++)
    {
        cout<<s[i].age<<" "<<s[i].name<<" "<<s[i].gpa<<endl;
    }
}
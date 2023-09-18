#include<iostream>
using namespace std;
struct student//data type
{
    int age;
    string name;
    float gpa;
} s1/*declaration*/,s2={19,"ahmed",2.7}/*declaration and intilization*/;
int main()
{
    s1={15,"osama"};//intilization
    cout<<s1.age<<" "<<s1.name<<" "<<s1.gpa<<endl;
    s1=s2;
    cout<<s1.age<<" "<<s1.name<<" "<<s1.gpa<<endl;
    struct student s3={20};//declartion and intilization  // age =20,name='\0',gpa=0
    cout<<s3.age<<" "<<s3.name<<" "<<s3.gpa<<endl;
    struct student s4,s5;//declartion
    s4={20,"shrouk",3.6};//intilization
    cout<<s4.age<<" "<<s4.name<<" "<<s4.gpa<<endl;
    if(s1.age==s2.age)
    {
        cout<<"same"<<endl;
    }
    cout<<"enter information of s5:\n";
    cin>>s5.age>>s5.name>>s5.gpa;//user enter information of s5
    cout<<s5.age<<" "<<s5.name<<" "<<s5.gpa<<endl;
}
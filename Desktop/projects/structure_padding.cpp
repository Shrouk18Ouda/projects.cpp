#include<iostream>
#pragma pack(1)
using namespace std;
struct student
{
    //char a;
    int age;
    float gpa;
    char grade;
};
int main()
{
    cout<<sizeof(struct student)<<endl;//4+4+1+[3]------>struct paddind
    //when use #pragma pack(1)  out-------> 9 --->[4+4+1]
}
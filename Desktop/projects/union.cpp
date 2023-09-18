#include<iostream>
using namespace std;
union abc
{
    int a;
    char b;
    float c;
};
int main()
{
    union abc u;
    u.a=8;
    u.b='a';
    u.c=8.4;
    cout<<u.a<<endl<<u.b<<endl<<u.c<<endl;//any number  any char 8.4
    union abc u1,*ptr;
    ptr=&u1;
    u1.a=5;
    u1.b='y';
    u1.c=6.1;
    cout<<ptr -> a<<endl<<ptr -> b<<endl<<ptr ->c<<endl;//any number any character 6.1
}
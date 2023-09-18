//in c can't say student s in main without struct before it
//you should define typedef before struct 
#include<stdio.h>
typedef struct student
{
    int age;
    char grade;
    float gpa;
}stu;
int main()
{
    stu s;
    s.age=19;
    s.grade='A';
    s.gpa=3.5;
    printf("%d %c %f\n",s.age,s.grade,s.gpa);
}
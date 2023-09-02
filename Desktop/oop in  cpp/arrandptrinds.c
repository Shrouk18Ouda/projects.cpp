#include<stdio.h>
int main()
{
    int a[5],i;
    int *q;
    q=a;
    for(i=0;i<5;i++)
    {
    //scanf("%d",&a[i]);// or q[i]
    //scanf("%d",(a+i));// or (q+i) or (i+a) or (i+q)
    scanf("%d",&i[q]);//or &i[a]
    }
    for(i=0;i<5;i++)
    {
       // printf("%d",a[i]); // or q[i]
       // printf("%d",*(q+i));// or *(a+i) or *(i+a) or *(i+q)
        printf("%d",i[a]);//or i[q]
    }   
}
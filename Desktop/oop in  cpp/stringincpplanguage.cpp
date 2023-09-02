#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[10]="hello";
    //str="hello";//error
    //strcpy(str,"hello");
   // cout<<str<<endl;
    char another_str[10];
    strcpy(another_str,str);
    cout<<another_str<<endl;
    char str1[10]="shrouk";
    char str2[10]="shrouk";
    if(strcmp(str1,str2))
    {
        cout<<"the strings are not the same\n";
    }
    else
    cout<<"the string are the same\n";
    cout<<strlen(str1)<<endl;//6
    strcat(str1,"_ouda");
    cout<<str1<<endl;
     if(strcmp(str1,str2))
    {
        cout<<"the strings are not the same\n";
    }
    else
    cout<<"the string are the same\n";
    strcat(str1,str2);
    cout<<str1<<endl;
    //  strcat("hello",str2);//error because the first argument must be a string variable.
    //  cout<<str2;
    char a[80];
    cin.getline(a,80);
    cout<<a<<"End of output";
}
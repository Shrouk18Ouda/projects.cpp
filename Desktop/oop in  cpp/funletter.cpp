#include<iostream>
using namespace std;
int main()
{
    char c1=toupper('a');
    char c2=tolower('A');
    cout<<c1<<endl<<c2<<endl;
    ////////////////
    if(isupper('a'))
    cout<<"is uppercase\n";
    else
    cout<<"is not uppercase\n";
    //////////////////
    if(islower('a'))
    cout<<"is lowercase\n";
    else
    cout<<"is not lowercase\n";
    /////////////////////
    if(isalpha('?'))
    cout<<"is a letter.\n";
    else
    cout<<"is not a letter.\n";
    //////////////////////
    if(isdigit('5'))
    cout<<"it's a digit\n";
    else
    cout<<"it's not a digit\n";
    ///////////////////////
    if(isalnum('a')&&isalnum('6'))
    cout<<"both alphanumeric.\n";
    else
    cout<<"one or more are not\n";
    ////////////////////////
    if(ispunct(';'))
    cout<<"is punctuation\n";
    else
    cout<<"is not punctuation\n";
    //////////////////////////
    if(isspace(' '))
    cout<<"true\n";
    else
    cout<<"false\n";
}
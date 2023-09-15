#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    //variabels
    int hours=0;
    int min=0;
    int sec=0;
    //end of variabels
    cout<<"Hours : ";
    cin>>hours;
    cout<<"Min : ";
    cin>>min;
    cout<<"Sec : ";
    cin>>sec;
    for(;;)
    {
        system("cls");
        if(sec>59)
        {
            min++;
            sec=0;
        }
        if(min>59)
        {
            hours++;
            min=0;
        }
        if(hours>23)
        {
            hours=0;
        }
        cout<<hours/10<<hours%10<<":"<<min/10<<min%10<<":"<<sec/10<<sec%10;
        sec++;
        Sleep(1000);
    }
}
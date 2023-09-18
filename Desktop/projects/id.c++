#include<iostream>
using namespace std;
int main()
{
    string str,name;
    cout<<"enter name: ";
    cin>>name;
    cout<<"hello "<<name<<", please enter your ID: ";
    cin>>str;
    cout<<"Data Of Birth: "<<str[5]<<str[6]<<"/"<<str[3]<<str[4]<<"/";
        if(str[0]=='2')
        {
            cout<<"19"<<str[1]<<str[2]<<endl;
        }
        else if(str[0]=='3')
        {
            cout<<"20"<<str[1]<<str[2]<<endl;
        }
        if(str[12]%2==0)
        {
            cout<<"Gender is: "<<"Female"<<endl;
        }
        else
        {
        cout<<"Gender is: "<<"Male"<<endl;
        }
        cout<<"Place Of Birth: ";
        if(str[7]=='0'&&str[8]=='1')
        {
            cout<<"Cairo\n";
        }
        else if(str[7]=='0'&&str[8]=='2')
        {
            cout<<"Alexandria\n";
        }
        else if(str[7]=='0'&&str[8]=='3')
        {
            cout<<"Port Said\n";
        }
        else if(str[7]=='0'&&str[8]=='4')
        {
            cout<<"Suez\n";
        }
        else if(str[7]=='1'&&str[8]=='1')
        {
            cout<<"Damietta\n";
        }
        else if(str[7]=='1')
        {
            if(str[8]=='2')
            {
                cout<<"Dakahlia\n";
            }
            else if(str[8]=='3')
            {
                cout<<"Al Sharqia\n";
            }
            else if(str[8]=='4')
            {
                cout<<"Qalyubia\n";
            }
            else if(str[8]=='5')
            {
                cout<<"Kafr el-Sheikh\n";
            }
            else if(str[8]=='6')
            {
                cout<<"Gharbia\n";
            }
            else if(str[8]=='7')
            {
                cout<<"Monufia\n";
            }
            else if(str[8]=='8')
            {
                cout<<"Beheira\n";
            }
            else if(str[8]=='9')
            {
                cout<<"Ismailia\n";
            }
        }
        else if(str[7]=='2')
        {
            if(str[8]=='1')
            {
                cout<<"Giza\n";
            }
            else if(str[8]=='2')
            {
                cout<<"Beni Suef\n";
            }
            else if(str[8]=='3')
            {
                cout<<"Faiyum\n";
            }
            else if(str[8]=='4')
            {
                cout<<"Minya\n";
            }
            else if(str[8]=='5')
            {
                cout<<"Asyut\n";
            }
            else if(str[8]=='6')
            {
                cout<<"Sohag\n";
            }
            else if(str[8]=='7')
            {
                cout<<"Qena\n";
            }
            else if(str[8]=='8')
            {
                cout<<"Aswan\n";
            }
            else if(str[8]=='9')
            {
                cout<<"Luxor\n";
            }
        }
        else if(str[7]=='3')
        {
            if(str[8]=='1')
            {
                cout<<"Red Sea\n";
            }
            else if(str[8]=='2')
            {
                cout<<"New Valley\n";
            }
            else if(str[8]=='3')
            {
                cout<<"Matrouh\n";
            }
            else if(str[8]=='4')
            {
                cout<<"North Sinai\n";
            }
            else if(str[8]=='5')
            {
                cout<<"South Sinai\n";
            }
        }
        else if(str[7]=='8'&&str[8]=='8')
        {
            cout<<"Out Of Egypet\n";
        }
}
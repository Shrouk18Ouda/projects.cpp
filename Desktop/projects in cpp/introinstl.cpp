#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector<int> arr;
    //arr.push_back(16);
    //cout<<arr.size()<<endl;//1
    //arr.push_back(7);
    //cout<<arr.size()<<endl;//2
    int n;
    vector<int> a;
    cin>>n;
    for(int i;i<n;i++)
    {
        int in;
        cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a.front()<<" "<<endl;
        //cout<<a.back()<<" "<<endl;
         //a.pop_back();
        //cout<<a.size();
    }
    cout<<a.size();
}
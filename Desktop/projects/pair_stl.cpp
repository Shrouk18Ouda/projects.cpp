#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    pair<int,string> p(19,"shrouk");//declartion and itilization
    cout<<p.first<<" "<<p.second<<endl;//19 shrouk
    p=make_pair(18,"shahd");//itilization
    cout<<p.first<<" "<<p.second<<endl;
    p={14,"ahmed"};//itilization
    cout<<p.first<<" "<<p.second<<endl;
    /**********************************************************************************/
    pair<int,pair<string,float>> student;//declartion
    student={19,{"shrouk",3.5}};//intilization
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;
    student=make_pair(12,make_pair("btol",2.7));
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;
    student.first=13;//intilization
    student.second.first="osama";//intilization
    student.second.second=2.1;//intilization
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;
    /**********************************************************************************/
    vector<pair<int,string>> vec;
    vec.push_back({19,"shrouk"});
    vec.push_back({15,"ahmed"});
    vec.push_back({7,"btol"});
    vec.push_back({11,"osama"});
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    /**********************/
    vector<pair<int,string>> ::iterator it;
    for(it =vec.begin();it!=vec.end();it++)
    {
        cout<<it -> first<<" "<<it -> second<<endl;
    }
    /**********************/
    for(auto v:vec)
    {
        cout<<v.first<<" "<<v.second<<endl;
    }
}
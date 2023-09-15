#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> vec = {6,8,9,3,2,1};
    vector<int>::iterator it;
    it=vec.begin();
    cout<<*it<<endl;//6
    it++;
    cout<<*it<<endl;//8
    cout<<*vec.begin()<<endl;//6
    it = vec.end();
    cout<<*it<<endl;//any number
    cout<<*(it-1)<<endl;//1
    it--;
    cout<<*it<<endl;//1
    cout<<*vec.end()<<endl;//any number
    vector<int>::reverse_iterator i;
    i=vec.rbegin();
    cout<<*i<<endl;//1
    i++;
    cout<<*i<<endl;//2
    i=vec.rend();
    cout<<*(i-1)<<endl;//6
    i-=2;
    cout<<*i<<endl;//8
    /**************to out element for this vector***************/
    for(it=vec.begin();it<vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    /*********or*************/
    for(i=vec.rend()-1;i>=vec.rbegin();i--)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(7);//add first element 7
    v1.push_back(5);//add second element 5
    v1.push_back(2);//add third elemen 2
    cout<<v1.size()<<endl;//3
    for (int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";//7 5 2
    }
    v1.pop_back();//delete last element 2
    cout<<endl<<v1.size()<<endl;//2
    v1.pop_back();//delete last element 5
    cout<<v1.size()<<endl;//1
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";//7 first element
    }
    cout<<endl;
    vector<int> v2(5,9);
    for (int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";//9 9 9 9 9
    }
    cout<<endl;
    v2.swap(v1);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";//9 9 9 9 9
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";//7
    }
    cout<<endl;
    v1.clear();//clear v1
    cout<<v1.size()<<endl;//0
    cout<<v1.empty()<<endl;//1
    /*******************************************************************************/
    vector<int> v={6,8,3,2,1,4};
    cout<<v[2]<<endl;//3
    cout<<v.at(1)<<endl;//8
    cout<<v.front()<<endl;//6
    cout<<v.back()<<endl;//4
    cout<<v.size()<<endl;//6
    cout<<v.capacity()<<endl;//6
    cout<<v.empty()<<endl;//0
    v.push_back(10);
    cout<<v.size()<<endl;//7
    cout<<v.capacity()<<endl;//12
    cout<<v.empty()<<endl;//0
    cout<<v.max_size()<<endl;//اقصي عدد عناصر ممكن تضيفه ال الارري

}
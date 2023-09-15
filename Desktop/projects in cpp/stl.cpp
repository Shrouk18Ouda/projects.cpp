#include<iostream>
#include<algorithm>
using namespace std;
// int a[10],b[10];
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i]>>b[i];
//     }
//     sort(a,a+n);
//     sort(b,b+n);//مش نافع بسبب انه كده هيعامل كل array لوحدها
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" "<<b[i]<<endl;
//     }
// }
/*****************************************************/
// struct point
// {
//     int x;
//     int y;
// };
// bool cmp(point a,point b)
// {
//     if(a.x==b.x)
//     {
//         return a.y<b.y;
//     }
//     return a.x<b.x;
// }
// point A[1000000];
// int n;
// int main()
// {
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i].x>>A[i].y;
//     }
//     sort(A,A+n,cmp);
//      for(int i=0;i<n;i++)
//     {
//         cout<<A[i].x<<" "<<A[i].y<<endl;
//     }
// }
/**********************************************************************/
// pair<int,int> A[10];
// int n;
// int main()
// {
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i].first>>A[i].second;
//     }
//     sort(A,A+n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<A[i].first<<" "<<A[i].second<<endl;
//     }
// }
/*******************************************************/
// pair<float,string> A[10000000];
// int n;
// int main()
// {
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i].first>>A[i].second;
//     }
//     cout<<"*************************\n";
//     sort(A,A+n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<A[i].first<<" "<<A[i].second<<endl;;
//     }
// }
/************************************************************************/
// pair<int ,pair<int,int>> A[10000000];
// int n;
// int main()
// {
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i].first>>A[i].second.first>>A[i].second.second;
//     }
//     sort(A,A+n);
//     cout<<"******************************************\n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<A[i].first<<" "<<A[i].second.first<<" "<<A[i].second.second<<endl;
//     }
// }
/***************************************************************************/
int A[10];
int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        A[i]=-A[i];
    }
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        cout<<-A[i]<<" ";
    }
}
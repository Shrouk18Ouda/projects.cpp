#include<iostream>
using namespace std;
class Triangle
{
private:
    float base;
    float hight;
public:
Triangle()//empty constructor
{
    cout<<"first constructor\n";
    base=80;
    hight=50;
}
Triangle(int b,int h)
{
    cout<<"second constructor\n";
    base=b;
    hight=h;
}
void setBase_Hight(float b,float h)
{
    base=b;
    hight=h;
}
float Area()
{
    return 0.5*base*hight;
}
void print()
{
    cout<<"base = "<<base<<endl;
    cout<<"hight = "<<hight<<endl;
    cout<<"Area = "<<Area()<<endl;
}
};
int main()
{
    Triangle obj(60,80),obj1;//call 1 constructor only.for 1 obj
    obj1.setBase_Hight(80,30);
    obj.print();
    obj1.print();
    obj1.print();
}
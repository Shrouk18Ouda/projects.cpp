//program calculate area of shapes
#include<iostream>
using namespace std;
class Shapes
{
    private:
    float length;
    float width;
    float l;
    float base;
    float hight;
    float ll;
    float r;
    public:
    void set_Rectangle(float l,float w)
    {
        length=l;
        width=w;
    }
    void set_Square(int x)
    {
        l=x;
    }
    void set_Trinagle(float b,float h,float a)
    {
        base=b;
        hight=h;
        ll=a;
    }
    void set_Circle(float y)
    {
        r=y;
    }
    float prime_Rectangle()
    {
        cout<<"prime is:";
        return 2*(length+width); 
    }
    float prime_Square()
    {
        cout<<"prime is:";
        return 4*l; 
    }
    float prime_Trinagle()
    {
        cout<<"prime is:";
        return base+hight+ll; 
    }
    float prime_Circle()
    {
        cout<<"prime is:";
        return 2*3.14*r; 
    }
    void get_rectangle()
    {
        cout<<"enter length and width";
        cin>>length>>width;
    }
    void get_square()
    {
        cout<<"enter length ";
        cin>>l;
    }
    void get_circle()
    {
        cout<<"enter R";
        cin>>r;
    }
    void get_trinagle()
    {
        cout<<"enter 3 length";
        cin>>base>>width>>ll;
    }
};
int main()
{
    cout<<"Hello guys\n";
    cout<<"this program calculate prime of this shapes:\n";
    cout<<"Rectangle,Square,Circle,Trinagle\n";
    cout<<"enter name of shape : ";
    Shapes obj;
    string name;
    cin>>name;
    if(name=="Rectangle")
    {
        obj.get_rectangle();
        obj.prime_Rectangle();
    }
    else if(name=="Trinagle")
    {
        obj.get_trinagle();
        obj.prime_Trinagle();
    }
    else if(name=="Square")
    {
        obj.get_square();
        obj.prime_Square();
    }
    else if(name=="Circle")
    {
        obj.get_circle();
        obj.prime_Circle();
    }
    else
    cout<<"error";
}
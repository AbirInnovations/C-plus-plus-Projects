#include<iostream>
using namespace std;
class Box
{
public:
    Box ()
    {
        cout<<"Empty constructor"<<endl;
    }
    int Length,Width,Height;
    Box (int l,int w,int h)
    {
        Length=l;
        Width=w;
        Height=h;
        cout<<"Parameterized constructor"<<endl;
    }
    Box operator+(Box obj)
    {
        Box a;
        cout<<"Sum : "<<endl;
        a.Length=Length+obj.Length;
        cout<<"Sum of Length : "<<a.Length<<endl;
        a.Width=Width+obj.Width;
        cout<<"Sum of Width : "<<a.Width<<endl;
        a.Height=Height+obj.Height;
        cout<<"Sum of Height : "<<a.Height<<endl;
        return a;
    }
    Box operator*(Box obj)
    {
        Box a;
        cout<<"Multiplication : "<<endl;
        a.Length=Length*obj.Length;
        cout<<"Multiplication of Length : "<<a.Length<<endl;
        a.Width=Width*obj.Width;
        cout<<"Multiplication of Width : "<<a.Width<<endl;
        a.Height=Height*obj.Height;
        cout<<"Multiplication of Height : "<<a.Height<<endl;
        return a;
    }
};
int main()
{
    Box a1(7,6,5);
    Box a2(4,3,2);
    Box a3=a1+a2;
    Box a4=a1*a2;

    return 0;
}

#include<iostream>
using namespace std;
class Box
{
public:
    Box ()
    {
        cout<<"Empty constructor"<<endl;
    }
    int length;
    int width;
    int height;
    Box (int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
        cout<<"Parameter constructor"<<endl;
    }
    Box operator+(Box obj)
    {
        Box a;
        cout<<"Sum : "<<endl;
        a.length=length+obj.length;
        cout<<"Sum of length : "<<a.length<<endl;
        a.width=width+obj.width;
        cout<<"Sum of width : "<<a.width<<endl;
        a.height=height+obj.height;
        cout<<"Sum of height : "<<a.height<<endl;
        return a;
    }
    Box operator*(Box obj)
    {
        Box a;
        cout<<"multiplication : "<<endl;
        a.length=length*obj.length;
        cout<<"multiplication of length : "<<a.length<<endl;
        a.width=width*obj.width;
        cout<<"multiplication of width : "<<a.width<<endl;
        a.height=height*obj.height;
        cout<<"multiplication of height : "<<a.height<<endl;
        return a;
    }
};
int main()
{
    Box a1(7,6,5);
    Box a2(2,3,4);
    Box a3=a1+a2;
    Box a4=a1*a2;

    return 0;
}

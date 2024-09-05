#include<iostream>

using namespace std;

class Rectangle
{
private:
    float length=0;
    float breadth=0;
    float area =0;
public:
    void setLength()
    {
        cout<<"Submit the length : ";
        cin>>length;

    }
    void setBreadth()
    {
        cout<<"Submit the breadth : ";
        cin>>breadth;

    }

    float returnArea()
    {
        area= length*breadth;
        return area;
    }

};
int main()
{
    Rectangle r;

    r.setLength();
    r.setBreadth();



    cout <<"Rectangle Area is : "<<r.returnArea();

    return 0 ;
}
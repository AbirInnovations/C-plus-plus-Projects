#include<iostream>


using namespace std;

class Box

{
private:
    float Length=0;
    float Breadth= 0;
    float Height=0;
    float Volume=0;


public:
    void setLenth()
    {
        cout<<"Submit The Length : ";
        cin>>Length;

    }
    void setBreadth()
    {
        cout<<"Submit The Breadth : ";
        cin>>Breadth;
    }
    void setHeight()
    {
        cout<<"Submit The Height : ";
        cin>>Height;
    }

    float returnVolume()
    {
        Volume= Length*Breadth*Height;
        return Volume;
    }

};
int main()
{
    Box s1;

    s1.setLenth();
    s1.setBreadth();
    s1.setHeight();



    cout <<" BOX VOLUME AMMOUNT : "<<s1.returnVolume();

    return 0 ;
    }
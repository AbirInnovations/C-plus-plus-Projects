#include<iostream>
#include<math.h>
using namespace std;
float sqr(float sidevalue){float squarearea=sidevalue *sidevalue; return squarearea;}
float circle(float radius){
    float circlearea= 3.14 * radius*radius;
    return circlearea;
    }
float triangle (float p, float q, float r){
    float s=(float)(p+q+r)/2;
    float areaoftringle=sqrt(s*(s-p)*(s-q)*(s-r));
    return areaoftringle;
    }
float rectangle(float length,float width){
    float areaofrectangle=length*width;
    return areaofrectangle;
    }
int main(){
float  squarearea,circlearea,areaoftringle,areaofrectringle,s;
int num;
    cout<<"area square enter 1"<<endl;
    cout<<"area circle enter 2"<<endl;
    cout<<"area triangle enter 3"<<endl;
    cout<<"area rectangle enter 4"<<endl;
    cout<<"submit  the number: ";
    cin>>num;
    if (num == 1){
        float sidevalue;
        cout<<"Submit the value of square side: ";
        cin>>sidevalue;
        cout<<"Area of square is: "<<sqr(sidevalue)<<endl;
    }
        else if (num == 2){
            float radius;
            cout<<"Submit the value of Radius: ";
            cin>>radius;
            cout<<"Area of circle is: "<<circle(radius)<<endl;
        }
        else if (num == 3){
            float a,b,c;
            cout<<"Submit the value of side 1: ";
            cin>>a;
            cout<<"Submit the value of side 2: ";
            cin>>b;
            cout<<"Submit the value of side 3: ";
            cin>>c;

            cout<<"Area of triangle is: "<<triangle(a,b,c)<<endl;
        }
        else if (num == 4){
            float length,width;
            cout<<"Enter the Length: ";
            cin>>length;
            cout<<"Enter the Width: ";
            cin>>width;
            cout<<"Area of rectangle is: "<<rectangle(length,width)<<endl;
        }
            else {
                cout<<"Enter the number between 1 to 4 "<<endl;
            }

    return 0;
}

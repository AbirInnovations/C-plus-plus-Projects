#include<iostream>
using namespace std;
int main ()
{

    int mark;

    cout <<"input your subject mark :"; cin>>mark;
if (mark  > 100)
    {
        cout<<"Your grade is : invalid "<<endl;
        }

 else if(mark  >= 90)
    {
        cout<<"Your grade is : A+"<<endl;
        cout<<"Your grade point is : 4.00";
    }
 else if(mark >= 85)
    {
        cout<<"Your grade is : A"<<endl;
        cout<<"Your grade point is : 3.75 ";
    }
 else if(mark  >=80)
    {
        cout<<"Your grade is : B+"<<endl;
        cout<<"Your grade point is :3.50  ";
    }
 else if (mark  >= 75 )
    {
        cout<<"Your grade is : B"<<endl;
        cout<<"Your grade point is : 3.25 ";
    }


 else if (mark  >= 65)
    {
        cout<<"Your grade is : C+"<<endl;
        cout<<"Your grade point is : 3.00";
    }



     else if (mark  >= 65)
    {
        cout<<"Your grade is : C"<<endl;
        cout<<"Your grade point is :  2.75";
    }

     else if (mark  >= 60)
    {
        cout<<"Your grade is : D + "<<endl;
        cout<<"Your grade point is :  2.50";
    }

     else if (mark  >= 65)
    {
        cout<<"Your grade is : D "<<endl;
        cout<<"Your grade point is :2.25  ";
    }

 else
    {
        cout<<"Your grade is : F "<<endl;
        cout<<"Your grade point is : 0.00  ";
    }


    return 0 ;
}

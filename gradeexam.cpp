#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float number; int dropnumber,grades;
    cout<<"Enter your cgpa: ";
 cin>>number;
    cout<<"Enter your course drop ammount: ";
    cin>> dropnumber;
    cout<<"Subject you got B+:  ";
    cin>> grades;
    if (3.75<=number && number<=4 && dropnumber==0 && grades==0) 
        cout<<"You get 45% Financial Aid.";

    else if (3.70<=number && number<3.75 && dropnumber<=1 && grades==0)
        cout<<"20% Financial Aid.";

    else if (3.50<=number && number<3.70 && dropnumber<=3 && grades==grades) 
        cout<<"10% Financial Aid.";

    else
        cout<<"Not Applicable for any Financial Aid.";

    return 0;
}

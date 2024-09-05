#include<iostream>
#include<math.h>
using namespace std;
int main()

{
    int x,y,div;
    div =x%2;

    cout<<"Enter the first number:"<<endl;
    cin>>x;
    cout<<"Enter the second number:"<<endl;
    cin>>y;

    if(div==0)
    {
        cout<<"The number is even"<<endl;
    }
    else
    {
        cout<<"the number is odd"<<endl;
    }

    if (x>y)
    {
        cout <<"fisrt one is maximum"<<endl;
    }
    else{cout <<"secoond one is maximum"<<endl;}

    return 0;
}

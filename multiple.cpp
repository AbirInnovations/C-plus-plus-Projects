#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter first number:"<<endl;
    cin>>x;
    cout<<"enter second number:"<<endl;
    cin>>y;

    if (x%y==0)
        {
            cout<<"first number is a multiple of second"<<endl;

        }
    else { cout<<"first number is not multiple of second"<<endl;

    }
    return 0;
}

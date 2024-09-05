#include <iostream>
using namespace std;
int main()
{
    int p,x=0,y=1,z=0;
    cout << "enter your number";
    cin>> p;
    cout<<"fibonacci series"<<endl;

    for(int i=1; i<=p; i=i+1){
        if(y==2){cout <<x<<endl;
        continue;}

        if(i==2){
            cout<<y<<endl;
            continue;

        }
        z=x+y;
        x=y;
        y=z;

        cout<<z<<endl;
    }
    return 0;

}

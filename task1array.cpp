#include<iostream>
using namespace std;
#define N 7
int main()
{
        int number[N];
    for(int i=0;i<N;i++)
    {
        cin>>number[i];
    }
    cout<<"printing the array"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<number[i]<<endl;
    }
    cout<<"Aray in reverse order"<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<number[i];
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int number;
    int array[50];
    int r1=0,r2=0;
    cout<<"submit array size:";
    cin>>number;
    for(int i=0;i<number;i++){
        cout<<"element:"<<i+1<<":";
        cin>>array[i];
        if(r1<array[i]){
            r2=r1;
            r1=array[i];
        }
        else if(r2<array[i]){
            r2=array[i];
        }
    }
    cout<<r1<<"is larest"<<endl;
    cout<<r2<<"second largest"<<endl;
    return 0;
}
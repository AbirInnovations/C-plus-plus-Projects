#include<iostream>
using namespace std;
int main (){

int i, num;
cout<<"---------------------------------------------------------"<<endl;
cout<<"Enter the number :";
cin>>num;
cout<<"---------------------------------------------------------"<<endl;


for ( int i=0; i<=num; i=i+1 )
    {
    if(i%2==0)
        cout<<"The even number is :"<<i<<endl;
}
cout<<"---------------------------------------------------------"<<endl;
for ( int i=0; i<=num; i=i+1 )
    {
    if(i%2!=0)
        cout<<"The odd numbers is :"<<i<<endl;
}
cout<<"---------------------------------------------------------"<<endl;
return 0;
}

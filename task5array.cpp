#include<iostream>
using namespace std;
int main (){


    int num[100],size,i,small1,small2;
cout<<"give the number of element in array : ";
cin>>size;
for(i=0; i<size; i=i+1){
    cout<<"give the array element"<<i+1<<" : ";
cin>>num[i];
if(small1>num[i]){
small2=small1;
small1=num[i];
}
else if(small2>num[i]){
small2=num[i];
}
}
cout<<"\n";
cout<<""<<small1<<"  is the small1 number \n";
cout<<small2<<"  is the small2 number";
    return 0;
}
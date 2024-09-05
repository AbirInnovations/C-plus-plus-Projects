#include<iostream>
using namespace std;
int main(){

int input[10],output[10],Number, i;
cout<<"Input Numbers: " ;
cin>>Number;
while(Number!=0){
    i=Number%10;
    Number=Number/10;
    if(i%2==0)
        cout<<" Even Number is: "<<i<<endl;
}
return 0;
}

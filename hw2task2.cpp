#include <iostream>  
using namespace std;  
int main()  
{  
int x[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
x[i]=n%2;    
n= n/2;  
}    
cout<<"Binary Result";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<x[i];    
}    
return 0;}  
#include<iostream>
using namespace std;
int main()
{
    int an1,an2,rem,gcd;

    cout<<"enter first number :";
    cin>>an1;

    cout<<"enter second  number :";
    cin>>an2;

     


     while  ( an2 != 0 )
   {
        rem =an1 % an2;
        an1 = an2;
        an2 = rem; }

         gcd = an1;




        cout <<"GCD :"<<gcd<<endl;


return 0 ;
}
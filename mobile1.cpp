#include<iostream>
#include<string>
using namespace std;

class member
{
private:
    string Accountname;
    int Accountnumber;
    float Balance;
    string Accounttype;

public:
    member()
    {

    }
    void setValue(string x,int y,float z,string c )
    {
        Accountname = x;
        Accountnumber = y;
        Balance = z;
        Accounttype = c;
    }
    string get01()
    {
        return Accountname;
    }
    int get02()
    {
        return Accountnumber;
    }
    float get03()
    {
        return Balance;
    }
    string get04()
    {
        return Accounttype;
    }
                      
    void ShowAccountDetails()
    {
        cout<<"ACCOUNT-Name : "<<Accountname<<endl;
        cout<<"ACCOUNT-No : "<<Accountnumber<<endl;
        cout<<"ACCOUNT-Balance : "<<Balance<<" /-"<<endl;
        cout<<"ACCOUNT-Type : "<<Accounttype<<endl;
        cout<<endl;
    }



};

int main()
{
    member X1,X2;
    float balance = 2345678.36;

    X1.setValue("Abir",30567863,balance,"regular");

    X1.ShowAccountDetails();

    float d;
    cout<<"Submit the Deposit Amount : ";
    cin>>d;
    float XY = balance+d;
    cout<<"Balance : "<<XY<<" /-"<<endl;

    float w;
    cout<<"Submit the withdraw Amount :  ";
    cin>>w;
    float UV = 
    -w;
    cout<<"Balance : "<<UV<<" /-"<<endl;
    cout<<endl;

    string yes;
    cout<<"Do you Want to transfer any amount (yes/no) ?  = ";
    cin>>yes;

    float Transfer;

    if(yes=="yes")
    {
        cout<<"Submit your Transfer amount : ";
        cin>>Transfer;
        float TTRA = UV-Transfer;
        cout<<"Total Balance : "<<TTRA<<" /-"<<endl;
    }
    else
    {
        cout<<"   ";
    }

    cout<<endl;
    cout<<"-----------"<<endl;
    cout<<endl;

    float Balance02 = 10990.96;
    X2.setValue("Abir",300696952,Balance02,"irregular");
    X2.ShowAccountDetails();

    float T2B = Transfer+Balance02;
    cout<<"Received Balance : "<<Transfer<<" /-"<<endl;
    cout<<"Total Balance : "<<T2B<<" /-"<<endl;


    return 0;
}
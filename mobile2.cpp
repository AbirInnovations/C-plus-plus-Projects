#include<iostream>
using namespace std;

class Mobile {
private:
    float Balance=0;
    string osname="";
    bool lock=0;
    string name="";
    string number="";
    
public:
    void setBalance(float b) {
        Balance=b;
    }
    float getBalance() {
        return Balance;
    }
    void setosname(string os) {
        osname=os;
    }
    string getosname() {
        
        return osname;
    }
    void setlock(int l){
        lock=l;
    }
    bool getlock() {
        return lock;
    }
    void setname(string n) {
        name=n;
    }
    string getname() {
        return name;
    }
    void setnumber(string nm) {
        number=nm;
    }
    string getnumber() {
        return number;
    }
  
    void ShowInfo() {
        cout<<lock<<endl;
        cout<<name<<endl;
        cout<<number<<endl;
        cout<<Balance<<endl;
        cout<<osname<<endl;
        cout<<"Recharge amount of mobile: "<<recharge<<endl;
        cout<<"Call duration time of mobile is: "<<durationofcall<<endl;
        cout<<"Cut amount : "<<amountcut<<endl;
        cout<<"New balance after call is: "<<balancenew<<endl;
    }

    //constructor area ======================================!=======================================================================

    int   recharge=0;
    float durationofcall=0;
    float balancenew=0;
    float amountcut=0;
    Mobile(){
        recharge=0;
        durationofcall=0;
        balancenew=0;
        amountcut=0;
        cout<<"Empty Mobile constructor"<<endl;

    }
    Mobile(int r,float d, float b, float a,float n) {
        recharge=r;
        durationofcall=d;
        balancenew=b;
        amountcut=a;


        cout<<"parameterized Mobile constructor"<<recharge<<endl;

    }
    //destructor area ======================================!=======================================================================
    ~Mobile() {
        cout<<"destructor is called for "<<recharge<<endl;
    }

};
int main () {
    bool lk;
    string nme;
    string num;
    float balance;
    string os;
    int recharge;
    float calldu;
    float amnt;
    float Balancenew;
    float newb;

    Mobile m1;

    cout<<"Enter the lock status:       press 0 for unlocked phone & press 1 for locked phone"<<endl;
    cin>>lk;
    m1.setlock (lk);
    cout<<m1.getlock()<<endl;

    if (lk==0)
    { cout<<"phone is unlocked"<<endl;

    Mobile m2;
    cout<<"Enter user's name: ";
    cin>>nme;
    m2.setname(nme);
    cout<<m2.getname()<<" is the user's name"<<endl;

    cout<<"Enter user's mobile number: ";
    cin>>num;
    m2.setnumber(num);
    cout<<m2.getnumber()<<" is the user's mobile number"<<endl;

    cout<<"Enter user's balance: ";
    cin>>balance;
    m2.setBalance(balance);
    cout<<m2.getBalance()<<" is the user's balance"<<endl;

    cout<<"Enter user's OS name: ";
    cin>>os;
    m2.setosname(os);
    cout<<m2.getosname()<<" is the user's OS name"<<endl;

    //constructor
    cout<<"Enter user's recharge amount: ";
    cin>>recharge;
    Balancenew=balance+recharge;
    cout<<"balance after recharge is  "<<Balancenew<<endl;

     cout<<"Enter user's call duration: ";
     cin>>calldu;
     cout<<"call duration is: "<<calldu<<endl;
     amnt=0.5*calldu;
     newb=Balancenew-(0.5*calldu);
     cout<<"cut balance is: "<<amnt<<endl;
     cout<<"new balance is: "<<newb<<endl;



    Mobile m3;
          m3.ShowInfo();
          m3.setname(nme);
          m3.setnumber(num);
          m3.setBalance(balance);
          m3.setosname(os);




    }
    else
        cout<<" Users Phone is locked"<<endl;
return 0;
}
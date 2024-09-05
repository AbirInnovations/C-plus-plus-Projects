#include<iostream>

using namespace std;
class Student{
private:
    string name="";
    string address="";
    string id="";
    int roll=0;
    string number="";

public:
    void setName(string x){
        name = x;
    }
    void setAddress(string a){
           address= a;
           }
     void setId(string k){
          id= k;
          }
          void setRoll(int y){
             roll= y;
             }

                void showStudentInfo(){
        cout<< name <<endl;
        cout<< address<<endl;
        cout<< id <<endl;
        cout<< roll <<endl;
        cout<< number <<endl;
    }

};
int main(){

    Student s1,s2;

    s1.setName("Sam");
    s1.setAddress("Chittagong");
    s1.setId  ("21-XXXXX-2");
    s1.setRoll  (06);

    s1.showStudentInfo();


    s2.setName ("John");
    s2.setAddress("Dhaka");
    s2.setId  ("21-XXXX1-2");
    s2.setRoll  (04);

    s2.showStudentInfo();


    return 0 ;

}

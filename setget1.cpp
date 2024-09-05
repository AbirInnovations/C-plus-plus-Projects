#include<iostream>


using namespace std;



class Student{
public:
    string  name;
    int  id;
    void showStudentInfo(){

    cout << name <<endl;
    cout << id   <<endl;


    }




};
 int main(){
     Student s1;


     s1.name="John";
      s1.id  =2222;
      s1.showStudentInfo();



 return 0;
 }
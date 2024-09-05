#include<iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    Person() //constructor call & destructor call.
    {
        cout<<"Person Empty Constructor"<<endl;
    }
    Person(string n) {
        name=n;
        cout<<" Person Parameterized Constructor "<<endl;
    }
    ~Person() {
        cout<<"Person Destructor "<<endl;
    }
    void showPerson(){
        cout<<"The name of the the person is "<<name<<endl;
    }

};
class Employee : virtual public Person { //hierarchical inheritance >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
protected:
    int income;


public:
    Employee(string n, int i ) : Person(n) {
        income = i;
        name=n;

        cout<<" Employee Parameterized Constructor"<<endl;
    }
    Employee()
    {
        cout<<"Employee Empty Constructor "<<endl;
    }
    ~Employee() {
        cout<<"Employee Destructor "<<endl;
    }
    void showEmployee(){
        cout<<"The name of the the Employee is "<<name<<endl;
        cout<<"The income of the the Employee is "<<income<<endl;
    }

};
class Student : virtual public Person { //student class hr
protected:
    int roll;
    string section;
    string bloodgroup;
public:
    Student(string n, int rl , string s , string b) : Person(n) {
        roll = rl;
        section = s;
        bloodgroup = b;
        name=n;

        cout<<" Student Parameterized Constructor"<<endl;
    }
 Student()
    {
        cout<<"Student Empty Constructor "<<endl;
    }
    ~Student() {
        cout<<"Student Destructor "<<endl;
    }
    void showStudent(){
        cout<<"The Name of the the student is "<<name<<endl;
        cout<<"The Roll of the the student is "<<roll<<endl;
        cout<<"The section of the the student is"<<section<<endl;
        cout<<"The bloodgroup of the student is"<<bloodgroup<<endl;
    }

};
class Faculty : public Employee { //hierarchical inheritance>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
protected:
    string subject;

public:
   Faculty(string n,int i, string sub ) : Employee(n , i) {
        subject = sub;
        name=n;

        cout<<" Faculty Parameterized Constructor "<<endl;
    }
 Faculty()
    {
        cout<<"Faculty Empty Constructor "<<endl;
    }
    ~Faculty() {
        cout<<"Faculty Destructor"<<endl;
    }
    void showFaculty(){
        cout<<"The name of the the Faculty is "<<name<<endl;
        cout<<"The income of the the Faculty is "<<income<<endl;
        cout<<"The subject of the the Faculty is "<<subject<<endl;
    }

};


class Officer : public Employee {
protected:
    string position;

public:
   Officer(string n,int i, string p ) : Employee(n , i) {
        position = p;
        name=n;

        cout<<" Officer Parameterized Constructor "<<endl;
    }
 Officer()
    {
        cout<<"Officer Empty Constructor "<<endl;
    }
    ~Officer() {
        cout<<"Officer Destructor "<<endl;
    }
    void showOfficer(){
        cout<<"The name of the the Officer is "<<name<<endl;
        cout<<"The income of the the Officer is "<<income<<endl;
        cout<<"The position of the the Officer is "<<position<<endl;
    }

};
class Ss : public Student { //SS means scholarship student
    //multilevel
protected :
    float CGPA;
public:
    Ss(string n, int rl , string s, string b, float c ) : Student (n,rl,s,b) {
        CGPA = c;
        name=n;
        cout<<"  Scholarship Student Parameterized Constructor "<<endl;
    }
    Ss()
    {
        cout<<" Scholarship Student Empty Constructor "<<endl;
    }
    ~Ss() {
        cout<<" Scholarship Student Destructor "<<endl;
    }
    void showSs(){
        cout<<"The name of the of student is "<<name<<endl;
        cout<<"The Roll of the student is "<<roll<<endl;
        cout<<"The section of the the student is "<<section<<endl;
        cout<<"The bloodgroup of the student is"<<bloodgroup<<endl;
        cout<<"The CGPA of the student is "<<CGPA<<endl;



    if (CGPA <= 4.00 && CGPA >= 3.65) {
        cout<<"The student is eligible for scholarship"<<endl;}
    else {
        cout<<"The student is not eligible for scholarship"<<endl;} }

};

class TA : public Student, public Employee {
private:
    string assignhour;
public:
    TA( string n, int rl , string s, string b, int i, string as) :  Student (n, rl ,s,b) , Employee(n,i)  {
        assignhour = as;
        name=n;
        cout<<"TA Parameterized Constructor"<<endl;
    }
    TA()
    {
        cout<<"TA Empty Constructor"<<endl;
    }
    ~TA() {
        cout<<"TA Destructor"<<endl;
    }
    void showTA(){
        cout<<"The name of the the TA is "<<name<<endl;
        cout<<"The roll of the the TA is "<<roll<<endl;
        cout<<"The section of the the TA is "<<section<<endl;
        cout<<"The blood group of the TA is"<<bloodgroup<<endl;
        cout<<"The income of the the TA is "<<income<<endl;
        cout<<"The Assignhour of the the TA is "<<assignhour<<endl;
    }


};


int main() { // Main function object creation.
    Person p1("Abir");
    p1.showPerson();


    Person p3; //Empty constructor/without parameter.

    Employee e1("Ashik Ali",10000);
    e1.showEmployee() ;

    Faculty f1("Zayad", 25000, "ICT");
    f1.showFaculty() ;


    Officer o1("Mussa Rahman", 300000, "first class");
    o1.showOfficer() ;

    Student s1("Rini",01 ,"Lotus","B+" );
    s1.showStudent() ;


    Ss p2("Tisha", 13, "WaterLilly","O+", 3.82);
    p2.showSs();
TA t ("nurul",20,"B3","A+",2700000,"6 hours" );
t.showTA();



    return 0;
}


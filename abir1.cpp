#include<iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    Person()
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
class Employee : public Person { //Hierarchical inheritance
protected:
    int income;

public:
    Employee(string n, int i ) : Person(n) {
        income = i;

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
class Student : public Person {
protected:
    int roll;
    string section;
public:
    Student(string n, int rl , string s) : Person(n) {
        roll = rl;
        section = s;

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
        cout<<"The section of the the student is "<<section<<endl;
    }

};
class Faculty : public Employee { //Hierarchical inheritance
protected:
    string subject;

public:
   Faculty(string n,int i, string sub ) : Employee(n , i) {
        subject = sub;

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
    Ss(string n, int rl , string s, float c ) : Student (n,rl,s) {
        CGPA = c;
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
        cout<<"The CGPA of the student is "<<CGPA<<endl;


    if (CGPA <= 4.00 && CGPA >= 3.75) {
        cout<<"The student is eligible for scholarship"<<endl;}
    else {
        cout<<"The student is not eligible for scholarship"<<endl;} }

};


int main() {
    Person p1("Abir");
    p1.showPerson();

    Employee e1("Ashik Ali", 10000);
    e1.showEmployee() ;

    Faculty f1("Zayad", 25000, "ICT");
    f1.showFaculty() ;


    Officer o1("Mussa Rahman", 300000, "first class");
    o1.showOfficer() ;

    Student s1("Rini",01 , "Lotus" );
    s1.showStudent() ;


    Ss p2("Tisha", 13, "WaterLilly", 3.82);
    p2.showSs();




    return 0;
}


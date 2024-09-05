#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    string year_of_joining;
    string salary;
    string address;
public:
    void setName(string n)
    {
        name =n;
    }
    void setYear_of_joining(string y)
    {
        Yearofjoining = y;
    }
    void setSalary(string s)
    {
        salary = s;
    }
    void setAddress(string a)
    {
        address= a;
    }
    void showemployeeinfo()
    {
        cout<<name<<"  "<<year_of_joining<<"  "<<salary<<"  "<<address<<"  "<<endl;

    }

};
int main()
{
    Employee s1,s2,s3,s4;

    s1.setName("Name");
    s1.setYearofjoining("Year Of Joining");
    s1.setSalary("Salary");
    s1.setAddress("Address");
    s1.showemployeeinfo();


    s2.setName("Robert");
    s2.setYearofjoining("1994");
    s2.setSalary("10000");
    s2.setAddress("64C-WallsStreat");
    s2.showemployeeinfo();


    s3.setName("Sam");
    s3.setYearofjoining("2000");
    s3.setSalary("20000");
    s3.setAddress("64D-WallsStreat");
    s3.showemployeeinfo();


    s4.setName("John");
    s4.setYearofjoining("1999");
    s4.setSalary("30000");
    s4.setAddress("26B-WallsStreat");
    s4.showemployeeinfo();


    return 0;
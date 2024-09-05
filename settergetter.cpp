#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;
// ---------------------- road to public 
  public:
    // Setter
    void setSalary(int x) {
      salary = x;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(3000);
  cout << myObj.getSalary();
  return 0;
}
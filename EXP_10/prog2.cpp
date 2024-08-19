#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  int roll_no;
  string name, course;

public:
  Student() : course("Computer Engineering") {}

  void read(int r, string n) {
    roll_no = r;
    name = n;
  }

  void display() {
    cout << "Roll no: " << roll_no << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
  }
};

int main() {
  Student s;

  s.read(25, "Advait");
  s.display();

  return 0;
}
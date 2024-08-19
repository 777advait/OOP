#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  float percentage;

public:
  Student() {
    name = "Advait";
    percentage = 94;
  }

  void display() {
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << "%" << endl;
  }
};

int main() {
  Student s;

  s.display();

  return 0;
}
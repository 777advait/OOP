#include <iostream>
using namespace std;

class Staff {
private:
  float basic, DA, HRA, gross;

public:
  void read(float b);
  void calculate();
  void display();
};

void Staff::read(float b) { basic = b; }

void Staff::calculate() {
  DA = 0.754 * basic;
  HRA = 0.30 * basic;
  gross = HRA + DA + basic;
}

void Staff::display() { cout << "Gross Salary: " << gross; }

int main() {
  Staff s;

  s.read(80000);
  s.calculate();
  s.display();

  return 0;
}
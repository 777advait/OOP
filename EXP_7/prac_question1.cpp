#include <iostream>
using namespace std;

class Calculator {
private:
  int n1, n2;

public:
  void get_data(int a, int b) {
    n1 = a;
    n2 = b;
  }
  friend void addition(Calculator);
  friend void subtraction(Calculator);
  friend void multiplication(Calculator);
  friend void division(Calculator);
};

void addition(Calculator c) { cout << "Addition: " << c.n1 + c.n2 << endl; }
void subtraction(Calculator c) {
  cout << "Subtraction: " << c.n1 - c.n2 << endl;
}
void multiplication(Calculator c) {
  cout << "Multiplication: " << c.n1 * c.n2 << endl;
}
void division(Calculator c) { cout << "Division: " << c.n1 / c.n2 << endl; }

int main() {
  Calculator c;
  c.get_data(10, 5);
  addition(c);
  subtraction(c);
  division(c);
  multiplication(c);

  return 0;
}
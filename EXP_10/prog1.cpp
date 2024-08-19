#include <iostream>
using namespace std;

class Numbers {
private:
  int num1, num2;

public:
  Numbers() {
    num1 = 10;
    num2 = 20;
  }

  void display() {
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
  }
};

int main() {
  Numbers n;

  n.display();

  return 0;
}
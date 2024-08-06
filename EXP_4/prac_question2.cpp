#include <iostream>
using namespace std;

class Mean {
  private:
    int num1, num2;

  public:
    void assign(int a, int b) {
      num1 = a;
      num2 = b;
    }

    void calculate_mean() {
      cout << "Mean: " << (num1 + num2)/2; 
    }
};


int main () {
  Mean m;

  m.assign(2, 2);
  m.calculate_mean();

  return 0;
}
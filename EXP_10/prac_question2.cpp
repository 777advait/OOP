#include <iostream>
using namespace std;

class Time {
private:
  int hr, min, sec;

public:
  Time(int h, int m, int s) {
    hr = h;
    min = m;
    sec = s;
  }

  void display() { cout << hr << ":" << min << ":" << sec; }
};

int main() {
  Time t(9, 18, 30);

  t.display();

  return 0;
}
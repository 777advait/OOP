#include <iostream>
using namespace std;

class Room {
  private:
    float length, breadth, height;

  public:
    void calculate_area(float l, float b, float h) {
      length = l;
      breadth = b;
      height = h;

      cout << "Area: " << 2*(l*b + b*h + h*l);
    }

    void calculate_volume(float l, float b, float h) {
      length = l;
      breadth = b;
      height = h;

      cout << "Volume: " << 2*(l*b + b*h + h*l);
    }
};

int main () {
  Room r;

  r.calculate_area(12, 12, 12);
  r.calculate_volume(12, 12, 12);

  return 0;
}
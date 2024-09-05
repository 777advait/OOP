#include <iostream>
#define PI 3.14
using namespace std;

class Circle {
    private:
        float radius;

    public:
        Circle(float r) {
            radius = r;
        }

        Circle(Circle &c) {
            radius = c.radius;
        }

        void display() {
            cout << "Area: " << PI * radius * radius;
        }
};

int main() {
    Circle c(5);
    Circle c1(c);

    c1.display();

    return 0;
}
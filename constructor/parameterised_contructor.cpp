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

        void display() {
            cout << "Area: " << PI * radius * radius;
        }
};

int main() {
    Circle c(5);

    c.display();

    return 0;
}
#include <iostream>
#define PI 3.14
using namespace std;

class Circle {
    private:
        float radius, area;

    public:
        void read(float r);
        void compute();
        void display();
};

void Circle::read(float r) {
    radius = r;
}

void Circle::compute() {
    area = PI * radius * radius;
}

void Circle::display() {
    cout << "Area: " << area;
}


int main () {
    Circle c;

    c.read(2);
    c.compute();
    c.display();

    return 0;
}
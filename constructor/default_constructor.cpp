#include <iostream>
#define PI 3.14
using namespace std;

class Circle {
    private:
        float radius;

    public:
        Circle() {
            radius = 2;
        }

        void display() {
            cout << "Area: " << PI * radius * radius;
        }
};

int main() {
    Circle c;

    c.display();
    
    return 0;
}
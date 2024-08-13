#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length, breadth;

    public:
        inline void read(float l, float b) {
            length = l;
            breadth = b;
        }

        inline void write() {
            cout << "Area: " << length * breadth;
        }
};

int main() {
    Rectangle r;

    r.read(32, 31);
    r.write();

    return 0;
}
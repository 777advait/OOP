#include <iostream>
using namespace std;

class Complex {
    private:
        float real, imag;

    public:
        void read(float r, float i);
        void write(Complex, Complex);
};


void Complex::read(float r, float i) {
    real = r;
    imag = i;
}

void Complex::write(Complex a, Complex b) {
    cout << "Sum: " << a.real + b.real << " + " << a.imag + b.imag;
}

int main() {
    Complex c1, c2;

    c1.read(2, 3);
    c2.read(5, 4);

    c2.write(c1, c2);

    return 0;
}
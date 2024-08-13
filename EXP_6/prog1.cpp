#include <iostream>
using namespace std;

class Number {
    private:
        int n1, n2;

    public:
        inline void get_data(int a, int b) {
            n1 = a;
            n2 = b;
        }
        inline void addition() {
            cout << "Addition: " << n1 + n2 << endl;
        }
        inline void subtraction() {
            cout << "Subtraction: " << n1 - n2 << endl;
        }
        inline void multiplication() {
            cout << "Multiplication: " << n1 * n2 << endl;
        }
        inline void division() {
            cout << "Division: " << n1 / n2 << endl;
        }
};

int main() {
    Number n;

    n.get_data(10, 5);
    n.addition();
    n.subtraction();
    n.multiplication();
    n.division();

    return 0;
}
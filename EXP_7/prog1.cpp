#include <iostream>
using namespace std;

class ExchangeOffer {
    private:
        int a, b;

    public:
        void get_data(int n1, int n2) {
            a = n1;
            b = n2;
        }

        friend void swap(ExchangeOffer);
};

void swap (ExchangeOffer E) {
    int temp = E.a;
    E.a = E.b;
    E.b = temp;

    cout << "a = " << E.a << endl << "b = " << E.b;
}

int main () {
    ExchangeOffer e;

    e.get_data(2, 3);
    swap(e);

    return 0;
}
#include <iostream>
using namespace std;

class Birthday {
    private:
        int day, month, year;

    public:
        void read(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        void display() {
            cout << "Birth date is " << day << "/" << month << "/" << year << endl;
        }
};

int main() {
    Birthday b[2], *ptr;
    int i, day, month, year;

    ptr = b;

    for (i = 0; i < 2; i++) {
        cout << "Enter day, month and year: ";
        cin >> day >> month >> year;

        ptr->read(day, month, year);
        ptr++;
    }

    ptr = b;

    for (i = 0; i < 2; i++) {
        ptr->display();
        ptr++;
    }

    return 0;
}
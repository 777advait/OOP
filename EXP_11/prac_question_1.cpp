#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
        char name[100];

    public:
        void get() {
            cout << "Enter roll no.: ";
            cin >> roll_no;
            cout << "Enter name: ";
            cin >> name;
        }
};

class Marks: protected Student {
    private:
        float m1, m2, m3, total, percentage;

    public:
        void get() {
            Student::get();
            cout << "Enter M1 marks: ";
            cin >> m1;
            cout << "Enter M2 marks: ";
            cin >> m2;
            cout << "Enter M3 marks: ";
            cin >> m3;
        }

        void display() {
            total = m1 + m2 + m3;
            percentage = total /3;

            cout << "Roll no.: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Percentage: " << percentage << endl;
        }
};

int main() {
    Marks m;

    m.get();
    m.display();

    return 0;
}
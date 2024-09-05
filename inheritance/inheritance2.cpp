// wap to declare a class college with data members college code, derive a new class student with data member student id accept and display detail of a student along with college 

#include <iostream>
using namespace std;

class College {
    protected:
        int code;
};

class Student: protected College {
    private:
        int id;
        char name[100];

    public:

        void get() {
            cout << "Enter code: ";
            cin >> College::code;
            cout << "Enter id: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
        }

        void display() {
            cout << "Code: " << College::code << endl;
            cout << "Id: " << id << endl;
            cout << "Name: " << name << endl;
        }
};

int main() {
    Student s;

    s.get();
    s.display();

    return 0;
}
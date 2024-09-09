#include <iostream>
using namespace std;

class Person {
    protected:
        char name[100], gender;
        int age;

    public:
        void get() {
            cout << "Name: ";
            cin >> name;
            cout << "Gender(M/F): ";
            cin >> gender;
            cout << "Age: ";
            cin >> age;
        }
};

class Employee: protected Person {
    protected:
        int id;
        char company[100];
        float salary;

    public:
        void get() {
    
        }
};
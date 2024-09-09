#include <iostream>
using namespace std;

class Employee {
    protected:
        int emp_id, emp_code;

        void get() {
            cout << "Enter id and code: ";
            cin >> emp_id >> emp_code;
        }
};

class Programmer: protected Employee {
    private:
        char skill[100];

    public:
        void get() {
            Employee::get();
            cout << "Enter skill: ";
            cin >> skill;
        }

        void put() {
            cout << "ID: " << Employee::emp_id << endl;
            cout << "Code: " << Employee::emp_code << endl;
            cout << "Skill: " << skill << endl;
        }
};

class Manager: protected Employee {
    private:
        char dept[100];

    public:
        void get() {
            Employee::get();
            cout << "Enter department: ";
            cin >> dept;
        }

        void put() {
            cout << "ID: " << Employee::emp_id << endl;
            cout << "Code: " << Employee::emp_code << endl;
            cout << "Department: " << dept << endl;
        }
};

int main() {
    Programmer p;
    Manager m;

    p.get();
    m.get();

    cout << "Programmer details" << endl;
    p.put();
    cout << "Manager details" << endl;
    m.put();

    return 0;
}
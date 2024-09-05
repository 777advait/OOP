// WAP to implement single inheritance having base class employee having data members emp_id, name, new class is derived from employee whose name is emp_info having data members basic_salary write gross salary function in employee_info class assume suitable details.



#include <iostream>
using namespace std;

class Employee {
    private:
        int emp_id;
        char name[100];

    public:
        void get() {
            cout << "Enter id: ";
            cin >> emp_id;
            cout << "Enter name: ";
            cin >> name;
        }

        void display() {
            cout << "ID: " << emp_id;
            cout << "Name: " << name;
        }
};


class EmployeeInfo: public Employee {
    private:
        float basic;

    public:
        void gets() {            
            cout << "Enter basic salary: ";
            cin >> basic;
        }

        void calc_salary() {
            float HRA = basic * 0.4, DA = basic * 0.1, TA = basic * 0.3;
            cout << "Gross salary: " << basic + HRA + TA + DA << endl;
        }
};

int main() {
    EmployeeInfo e;

    
    e.get();
    e.gets();
    e.calc_salary();
    
    return 0;
}
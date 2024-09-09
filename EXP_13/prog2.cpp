#include <iostream>
using namespace std;

class Staff {
    protected:
        int code;
        char name[100];

    public:
        void get() {
            cout << "Enter staff code: ";
            cin >> code;
            cout << "Enter staff name: ";
            cin >> name;
        }
};

class Teacher: protected Staff {
    private:
        char subj[100], pub[100];

    public:
        void get() {
            Staff::get();
            cout << "Enter teacher subject: ";
            cin >> subj;
            cout << "Enter teacher publication: ";
            cin >> pub;
        }

        void put() {
            cout << "Code: " << Staff::code << endl;
            cout << "Name: " << Staff::name << endl;
            cout << "Subject: " << subj << endl;
            cout << "Publication: " << pub << endl;
        }
};

class Officer: protected Staff {
    private:
        char grade;

    public:
        void get() {
            Staff::get();
            cout << "Enter officer grade: ";
            cin >> grade;
        }

        void put() {
            cout << "Code: " << Staff::code << endl;
            cout << "Name: " << Staff::name << endl;
            cout << "Grade: " << grade << endl;
        }
};

class Typist: protected Staff {
    protected:
        int speed;

    public:
        void get() {
            Staff::get();
            cout << "Enter typist speed: ";
            cin >> speed;
        }
};

class Regular: protected Typist {
    public:
        void get() {
            Typist::get();
        }
        void put() {
            cout << "Code: " << Staff::code << endl;
            cout << "Name: " << Staff::name << endl;
            cout << "Speed: " << Typist::speed << endl;
        }
};

class Casual: protected Typist {
    private:
        float wages;
    public:
        void get() {
            Typist::get();
            cout << "Enter daily wage: ";
            cin >> wages;
        }
        void put() {
            cout << "Code: " << Staff::code << endl;
            cout << "Name: " << Staff::name << endl;
            cout << "Speed: " << Typist::speed << endl;
            cout << "Wages: " << wages << endl;
        }
};

int main() {
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    t.get();
    cout << "Teacher details: " << endl;
    t.put();
    cout << endl;

    o.get();
    cout << "Officer details: " << endl;
    o.put();
    cout << endl;

    r.get();
    cout << "Regular typist details: " << endl;
    r.put();
    cout << endl;

    c.get();
    cout << "Casual typist details: " << endl;
    c.put();
    cout << endl;

    return 0;
}


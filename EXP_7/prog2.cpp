#include <iostream>
using namespace std;

class test2;

class test1 {
private:
    float m1;

public:
    void get_data(float m) { m1 = m; }

    friend void avg(test1, test2);
};

class test2 {
private:
    float m2;

public:
    void get_data(float m) { m2 = m; }

    friend void avg(test1, test2);
};

void avg(test1 t1, test2 t2) {
    cout << "Average: " << (t1.m1 + t2.m2) / 2;
}

int main() {
    test1 t1;
    test2 t2;

    t1.get_data(2);
    t2.get_data(3);

    avg(t1, t2);

    return 0;
}
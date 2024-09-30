#include <iostream>
using namespace std;

class Player {
    protected:
        int matches;
        char name[100];

    public:
        void get() {
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the number of mathces: ";
            cin >> matches;
        }
};

class Batsmen {
    protected:
        int total_score, per_match_score, avg;
};

// wap to declare a class college with data members name, code. derive a new class student from a class college with data members student name, roll no, perccentage and address. accept and display data for 10 objects

#include <iostream>
using namespace std;

class College {
  protected:
    int code;
    char name[100];
};

class Student: protected College {
  private:
    char name[100], address[1000];
    int roll_no;
    float percentage;

  public:
    void get() {
      cout << "Enter college code: ";
      cin >> College::code;
      cout << "Enter college name: ";
      cin >> College::name;
      cout << "Enter student name: ";
      cin >> name;
      cout << "Enter student roll no.: : ";
      cin >> roll_no;
      cout << "Enter student percentage: ";
      cin >> percentage;
      cout << "Enter student address: ";
      cin >> address;
    }

    void display() {
      cout << "Enter college code: " << College::code << endl;
      cout << "Enter college name: " << College::name << endl;
      cout << "Enter student name: " << name << endl;
      cout << "Enter student roll no.: : " << roll_no << endl;
      cout << "Enter student percentage: " << percentage << endl;
      cout << "Enter student address: " << address << endl;
    }
};

int main() {
  Student s[10];
  int i;

  for (i = 0; i < 10; i++) {
    s[i].get();
  }

  for (i = 0; i < 10; i++) {
    s[i].display();
  }

  return 0;
}
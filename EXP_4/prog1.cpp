#include <iostream>
using namespace std;

class Bike {
  private:
    int model;
    char name[100];
    float price;

  public:
    void getData() {
      cout << "Enter model no., name and price of the bike: ";
      cin >> model >> name >> price;
    }

    void putData() {
      cout << "Model no.: " << model << endl;
      cout << "Name: " << name << endl;
      cout << "Price: " << price << endl;
    }
};

int main () {
  Bike b;

  b.getData();
  b.putData();

  return 0;
}
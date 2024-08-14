#include <iostream>
using namespace std;

class Account {
private:
  int acc_no;
  float balance;

public:
  void read(int acc, float bal) {
    acc_no = acc;
    balance = bal;
  }

  void display() {
    if (balance > 10000) {
      cout << "Account number: " << acc_no;
      cout << "Balance: " << balance;
    }
  }
};

int main() {
  int acc_no, i;
  float balance;

  Account acc[10];

  for (i = 0; i < 10; i++) {
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter account balance: ";
    cin >> balance;

    acc[i].read(acc_no, balance);
  }

  for (i = 0; i < 10; i++) {
    acc[i].display();
  }

  return 0;
}
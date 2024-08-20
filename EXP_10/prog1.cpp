#include <iostream>
using namespace std;

class Numbers
{
private:
  int num1, num2;

public:
  Numbers(int n1 = 10, int n2 = 20)
  {
    num1 = n1;
    num2 = n2;
  }

  void display()
  {
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
  }
};

int main()
{
  Numbers n;

  n.display();

  return 0;
}
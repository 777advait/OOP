#include <iostream>
using namespace std;

class Swap
{
private:
  int a, b;

public:
  void getData(int n1, int n2)
  {
    a = n1;
    b = n2;
  }

  friend void swap(Swap);
};

void swap(Swap s)
{
  int temp;
  cout << "a: " << s.a << " b: " << s.b << endl;

  temp = s.a;
  s.a = s.b;
  s.b = temp;

  cout << "a: " << s.a << " b: " << s.b << endl;
}

int main()
{
  Swap s;
  s.getData(10, 20);
  swap(s);

  return 0;
}
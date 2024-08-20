#include <iostream>
using namespace std;

int main()
{
  float n1, n2;
  int avg;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  avg = (n1 + n2) / 2;
  cout << "Average of the two numbers: " << avg << endl;

  return 0;
}
// explicit casting

#include <iostream>
using namespace std;

int main()
{
  double l, b;

  cout << "Enter length and breadth of the rectangle: ";
  cin >> l >> b;

  cout << "Area of the rectangle in float: " << (float)(l * b) << endl;
  cout << "Area of the rectangle in int: " << (int)(l * b) << endl;

  return 0;
}
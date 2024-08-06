#include <iostream>
using namespace std;

int main () {
  int a, b, c;

  cout << "Enter the value of a, b and c: ";
  cin >> a >> b >> c;

  int x = (-b-(b*b - 4*a*c))/2*a;
  
  cout << "The value of X is: " << x;

  return 0;
}
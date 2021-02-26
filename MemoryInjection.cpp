
#include <iostream>

using namespace std;

int main()
{

  char *p1 = "Rosebud"; // the top secret password
  char *p2 = "Safe";
  long buffer[1];

  cout << &p1 << endl;
  cout << &p2 << endl;
  cout << buffer << endl;

  cin >> buffer[1]; // actually referencing the pointer 'p1'
  cout << p1;

  return 0;
}
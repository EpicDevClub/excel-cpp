#include <iostream>
using namespace std;

int maxNumOutOfThree(int a, int b, int c) {
  if(a > b && a > c) return a;
  else if(b > a && b > c) return b;
  else return c;
}

int main() {
  cout << "Maximum out of 1,2,3 is: " << maxNumOutOfThree(1,2,3) << endl;
  return 1;
}

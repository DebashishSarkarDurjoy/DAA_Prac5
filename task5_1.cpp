#include <iostream>
#include <string>

using namespace std;


long double power(int x, int y) {
  if (y >= 0) {
    if (y == 0) return 1;
    if (y == 1) return x;
    if (y > 1) return x * power(x, y - 1);
  }
  if (y < 0) {
    return 1 / power(x, -1 * (y) );
  }

  return 0;
}

int main(int argc, char* argv[]) {

  cout << argv[1] << "^" << argv[2] << " = " << power(stoi(argv[1]), stoi(argv[2])) << endl;

  return 0;
}

#include <iostream>
#include <string>
using namespace std;

long fact(int num) {
  if (num == 0) return 1;
  else return fact(num-1) * num;
}

int main(int argc, char *argv[]) {
  cout << "The factorial is " << fact( stoi(argv[1]) ) << endl;

  return 0;
}

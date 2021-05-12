#include <iostream>
#include <string>

using namespace std;

void showStars(int n) {

  if (n == 0)
  {
    cout << endl;
    return;
  }
  else {
    cout << "* ";
    showStars(n-1);
  }

}

void showLines(int n)
{
  if (n == 0)
    return;
  else {
    showStars(n);
    showLines(n-1);
    showStars(n);

  }

}

int main(int argc, char* argv[]) {

  showLines( 4 );

  return 0;
}

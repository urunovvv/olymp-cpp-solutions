#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int w = abs(x1 - x2);
  int h = abs(y1 - y2);
  int p = 2 * (w + h);
  int s = w * h;
  cout << p << ' ' << s << '\n';

  return 0;
}

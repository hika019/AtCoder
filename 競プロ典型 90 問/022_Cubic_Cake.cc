#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
using namespace std;

int main() {
  long long int a, b, c, z;
  std::cin >> a >> b >> c;

  z = gcd(b, c);

  z = gcd(a, z);

  std::cout << (a/z)+(b/z)+(c/z)-3 << '\n';

  return 0;
}

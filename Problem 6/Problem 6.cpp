#include <cmath>
#include <iostream>

typedef unsigned long long ull;

auto main(int argc, char *argv[]) -> int {
  int t;
  ull n;

  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::cout << (n * (n + 1) * (n - 1) * (3 * n + 2)) / 12 << '\n';
  }

  return 0;
}

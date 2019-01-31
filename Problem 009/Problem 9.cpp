#include <iostream>
#include <vector>
#include <cmath>

typedef const int ci;
typedef unsigned int ui;
typedef std::vector<int> vi;

auto prep() -> vi;

auto main(int argc, char *argv[]) -> int {
  ui t, n;

  vi saved = prep();

  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::cout << saved[n] << "\n";
  }

  return 0;
}

auto prep() -> vi {
  ci max = 3000, empty = -1;
  vi saved(max + 1, empty);
  
  for (int a = 1; a < max; a++) {
    for (int b = a + 1; b < max - a; b++) {
      int cc = std::pow(a, 2) + std::pow(b, 2);
      int c = std::sqrt(cc);
      if (std::pow(c, 2) != cc) {
        continue;
      }

      int sum = a + b + c;
      if (sum > max) {
        break;
      }

      int prod = a * b * c;
      saved[sum] = (saved[sum] < prod) ? prod : saved[sum];
    }
  }

  return saved;
}

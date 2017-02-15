#include <vector>
#include <iostream>

typedef long long ll;

auto gcd(int, int) -> int;
auto solve(int) -> ll;

auto main(int argc, char *argv[]) -> int {
  int T, N;

  std::cin >> T;
  while (T--) {
    std::cin >> N;
    std::cout << solve(N) << "\n";
  }

  return 0;
}

auto gcd(int x, int y) -> int { return y ? gcd(y, x % y) : x; }

auto solve(int s) -> ll {
  int a = 0, b = 0, c = 0;
  int k = 0, d = 0, m = 0, n = 0;
  ll r = -1;
  bool found = false;

  if (s % 2) {
    return r;
  }

  for (m = 2; m * m <= s / 2; ++m) {
    if ((s / 2) % m == 0) {
      if (m % 2 == 0) {
        k = m + 1;
      } else {
        k = m + 2;
      }
      while (k < 2 * m && k <= s / (2 * m)) {
        if (s / (2 * m) % k == 0 && gcd(k, m) == 1) {
          d = s / 2 / (k * m);
          n = k - m;
          a = d * (m * m - n * n);
          b = 2 * d * m * n;
          c = d * (m * m + n * n);
          r = a * b * c;
          found = true;
          break;
        }
        k += 2;
      }
    }
    if (found) {
      break;
    }
  }

  return r;
}

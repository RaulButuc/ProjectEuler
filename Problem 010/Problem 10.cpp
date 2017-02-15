#include <cmath>
#include <vector>
#include <iostream>

typedef unsigned long long ull;

auto sieveOfEratosthenes(std::vector<int> &, std::vector<bool> &, int) -> void;
auto solve(std::vector<int>, int) -> ull;

const int maxn = std::pow(10, 6);

auto main(int argc, char *argv[]) -> int {
  int t, n;
  std::vector<int> primes;
  std::vector<bool> isPrime;
  sieveOfEratosthenes(primes, isPrime, maxn);

  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::cout << solve(primes, n) << "\n";
  }

  return 0;
}

auto sieveOfEratosthenes(std::vector<int> &primes, std::vector<bool> &isPrime, int n) -> void {
  isPrime.push_back(false);
  for (auto i = 1; i <= n; ++i) isPrime.push_back(true);

  for (auto i = 1; i <= n; ++i) {
    if (isPrime.at(i - 1)) {
      primes.push_back(i);
      for (auto j = 1; j <= n / i; ++j) {
        if (isPrime.size() <= i * j - 1) {
          break;
        }
        isPrime.at((i * j) - 1) = false;
      }
    }
  }
}

auto solve(std::vector<int> primes, int n) -> ull {
  ull r = 0;

  for (auto it = primes.begin(); it != primes.end(); ++it) {
    if (*it > n) {
      break;
    }
    r += *it;
  }

  return r;
}

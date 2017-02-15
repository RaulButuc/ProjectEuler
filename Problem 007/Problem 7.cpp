#include <vector>
#include <iostream>

const int max = 150000;

auto sieveOfEratosthenes(std::vector<int> &, std::vector<bool> &) -> void;

auto main(int argc, char *argv[]) -> int {
  int noTests;
  std::vector<int> primes;
  std::vector<bool> isPrime;

  sieveOfEratosthenes(primes, isPrime);

  int test;
  std::cin >> noTests;
  for (auto i = 0; i < noTests; ++i) {
    std::cin >> test;
    std::cout << primes.at(test - 1) << "\n";
  }

  return 0;
}

auto sieveOfEratosthenes(std::vector<int> &primes, std::vector<bool> &isPrime) -> void {
  isPrime.push_back(false);
  for (auto i = 1; i <= max; ++i) isPrime.push_back(true);

  for (auto i = 1; i <= max; ++i) {
    if (isPrime.at(i - 1)) {
      primes.push_back(i);
      for (auto j = 1; i * j <= max; ++j) isPrime.at((i * j) - 1) = false;
    }
  }
}

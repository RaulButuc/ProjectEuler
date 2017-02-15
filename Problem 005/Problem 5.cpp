#include <cmath>
#include <vector>
#include <iostream>

typedef std::vector<int> vi;

auto getPrimeNumbersInRange(int) -> vi;

auto main(int argc, char *argv[]) -> int {
  int t, n, r;
  vi v;
  vi::iterator it;

  std::cin >> t;
  while (t--) {
    std::cin >> n;

    r = 1;
    v.clear();
    v = getPrimeNumbersInRange(n);

    for (it = v.begin(); it != v.end(); ++it) {
      int a = floor(log(n) / log(*it));
      r *= pow(*it, a);
    }

    std::cout << r << '\n';
  }

  return 0;
}

auto getPrimeNumbersInRange(int n) -> vi {
  vi v({2});

  for (int i = 3; i <= n; i += 2) {
    int j = 0;
    bool prime = true;

    while (v.at(j) * v.at(j) <= i) {
      if (!(i % v.at(j))) {
        prime = false;
        break;
      }

      j++;
    }

    if (prime) {
      v.push_back(i);
    }
  }

  return v;
}

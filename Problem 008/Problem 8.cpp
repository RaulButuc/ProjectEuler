#include <vector>
#include <string>
#include <iostream>

typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;

auto solve(void) -> ull;
auto checkSol(ull, ull) -> ull;
auto translate(std::string) -> vvi;

auto main(int argc, char *argv[]) -> int {
  int t;

  std::cin >> t;
  while (t--) {
    std::cout << solve() << "\n";
  }

  return 0;
}

auto solve(void) -> ull {
  int noDigits;
  int noSelectedDigits;
  std::string strDigits;
  vi digits;
  vvi allDigits;
  ull result = 0;

  std::cin >> noDigits >> noSelectedDigits >> strDigits;
  allDigits = translate(strDigits);

  for (auto digits = allDigits.begin(); digits != allDigits.end(); ++digits) {
    int j = 0;
    ull tempResult = 1;
    for (auto i = 0; i + j < digits->size(); ++i) {
      if (i + noSelectedDigits >= digits->size()) {
        continue;
      }

      while (j < noSelectedDigits) {
        tempResult *= digits->at(i + j);
        j++;
      }
      result = checkSol(result, tempResult);

      tempResult = tempResult / digits->at(i);
      tempResult *= digits->at(i + j);
      result = checkSol(result, tempResult);
    }
  }

  return result;
}

auto checkSol(ull x, ull y) -> ull { return x < y ? y : x; }

auto translate(std::string strDigits) -> vvi {
  vi partial;
  vvi result;

  for (auto i = 0; i < strDigits.size(); ++i) {
    int val = static_cast<int>(strDigits.at(i) - '0');
    if (val != 0) {
      partial.push_back(val);
    } else if (!partial.empty()) {
      result.push_back(partial);
      partial.clear();
    }
  }

  if (!partial.empty()) {
    result.push_back(partial);
    partial.clear();
  }

  return result;
}
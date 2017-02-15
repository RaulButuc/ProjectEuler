# Problem 6: Sum square difference

The sum of the squares of the first ten natural numbers is 1<sup>2</sup> + 2<sup>2</sup> + ... + 10<sup>2</sup> = 385. The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)<sup>2</sup> = 55<sup>2</sup> = 3025. Hence the absolute difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the absolute difference between the sum of the squares of the first _N_ natural numbers and the square of the sum.

## Input Format

First line contains _T_ that denotes the number of test cases. This is followed by _T_ lines, each containing an integer, _N_.

## Constraints

* 1 <= _T_ <= 10<sup>4</sup>
* 1 < _N_ < 10<sup>4</sup>

## Output Format

Print the required answer for each test case.

## Sample Input

    2
    3
    10

## Sample Output

    22
    2640

## Explanation

For _N_ = 3, (1 + 2 + 3)<sup>2</sup> - (1<sup>2</sup> + 2<sup>2</sup> + 3<sup>2</sup>) = 22.

For _N_ = 12, (1 + 2 + ... + 10)<sup>2</sup> - (1<sup>2</sup> + 2<sup>2</sup> + ... + 10<sup>2</sup>) = 2640.

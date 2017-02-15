# Problem 9: Special Pythagorean triplet

A Pythagorean triplet is a set of three natural numbers, _a_ < _b_ < _c_, for which,

_a_<sup>2</sup> + _b_<sup>2</sup> = _c_<sup>2</sup>

For example, 3<sup>2</sup> + 4<sup>2</sup> = 9 + 16 = 25 = 5<sup>2</sup>

Given _N_, check if there exists any Pythagorean triplet for which _a_ + _b_ + _c_ = _N_
Find the maximum possible value of _a_ x _b_ x _c_ among all such Pythagorean triplets. If there is no such Pythagorean triplet, print -1.

## Input Format

The first line contains _T_ that denotes the number of test cases.
The next _T_ lines will contain an integer _N_.


## Constraints

* 1 <= _T_ <= 3000
* K <= _N_ <= 3000

## Output Format

Print the required answer for each test case.

## Sample Input 0

    2
    12
    4

## Sample Output 0

    60
    -1

## Explanation 0

For _N_ = 12, we have a triplet {3, 4, 5}, whose product is 60.

For _N_ = 4, we don't have any Pythagorean triplet.

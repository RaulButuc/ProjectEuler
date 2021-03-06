# Problem 2: Even Fibonacci numbers

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed _N_, find the sum of the even-valued terms.

## Input Format

First line contains _T_ that denotes the number of test cases. This is followed by _T_ lines, each containing an integer, _N_.

## Constraints

* 1 <= _T_ <= 10<sup>5</sup>
* 10 <= _N_ <= 4 x 10<sup>16</sup>

## Output Format

Print the required answer for each test case.

## Sample Input

    2
    10
    100

## Sample Output

    10
    44

## Explanation

For _N_ = 10, we have {2, 8}, sum is 10.

For _N_ = 100, we have {2, 8, 34}, sum is 44.

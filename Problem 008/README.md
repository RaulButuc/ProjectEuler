# Problem 8: Largest product in a series

Find the greatest product of _K_ consecutive digits in the _N_ digit number.

## Input Format

First line contains _T_ that denotes the number of test cases.
First line of each test case will contain two integers _N_ & _K_.
Second line of each test case will contain a _N_ digit integer.

## Constraints

* 1 <= _T_ <= 10<sup>2</sup>
* 1 <= _K_ <= 7
* K <= _N_ <= 10<sup>3</sup>

## Output Format

Print the required answer for each test case.

## Sample Input

    2
    10 5
    3675356291
    10 5
    2709360626

## Sample Output

    3150
    0

## Explanation

For 3675356291 and selecting _K_ = 5 consecutive digits, we have 35753, 67535, 75356, 53562, 35629 and 56291. Where 6 x 7 x 5 x 3 x 5 gives the maximum product as 3150.

For 2709360626, 0 lies in all selections of 5 consecutive digits hence the maximum product remains 0.

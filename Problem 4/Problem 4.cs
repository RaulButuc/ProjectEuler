using System;
using System.Linq;
using System.Collections.Generic;
using System.IO;

class Solution {

    static void Main(String[] args) {
        int tests = Convert.ToInt32(Console.ReadLine());
        
        while (tests-- > 0) {
            bool found = false;
            int maxN = Convert.ToInt32(Console.ReadLine());
            int firstHalf = 998, palindrome = 0;
            int[] factors = new int[2] ;

            while (!found) {
                firstHalf--;
                palindrome = makePalindrome(firstHalf);
                for (int i = 999; i > 99; --i) {
                    if ((palindrome / i) > 999 || i*i < palindrome) {
                        break;
                    }

                    if ((palindrome % i == 0) && palindrome < maxN) {
                        found = true;
                        factors[0] = palindrome / i;
                        factors[1] = i;
                        break;
                    }
                }
            }
        
            Console.WriteLine("{0}", palindrome);
        }
    }
    
    private static int makePalindrome(int firstHalf) {
        char[] reversed = firstHalf.ToString().Reverse().ToArray();
        return Convert.ToInt32(firstHalf + new string(reversed));
    }

}

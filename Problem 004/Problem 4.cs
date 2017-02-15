using System;
using System.Linq;
using System.Collections.Generic;
using System.IO;

class Solution {

  static void Main(String[] args) {
    int t = Convert.ToInt32(Console.ReadLine());

    while (t-- > 0) {
      bool found = false;
      int maxN = Convert.ToInt32(Console.ReadLine());
      int fHalf = 998, pal = 0;
      int[] fact = new int[2];

      while (!found) {
        fHalf--;
        pal = mkpal(fHalf);
        for (int i = 999; i > 99; --i) {
          if ((pal / i) > 999 || i * i < pal) {
            break;
          }

          if ((pal % i == 0) && pal < maxN) {
            found = true;
            fact[0] = pal / i;
            fact[1] = i;
            break;
          }
        }
      }

      Console.WriteLine("{0}", pal);
    }
  }

  private static int mkpal(int fHalf) {
    char[] rev = fHalf.ToString().Reverse().ToArray();
    return Convert.ToInt32(fHalf + new string(rev));
  }

}
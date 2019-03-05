using System;
using System.Linq;
using System.Text;

class Program
{
  public static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
    int n = s[0];
    int m = s[1];
    int k = s[2];
    if (n != m) {
      if (n > m) Console.WriteLine("Y");
      else if (n < m) Console.WriteLine("X");
    }
    else {
      int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
      int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();
      for (int i = 0; i < n; i ++) {
        if (a[i] > b[i]) {
          Console.WriteLine("Y");
          break;
        }
        else if (a[i] < b[i]) {
          Console.WriteLine("X");
          break;
        }
        if (i == n - 1 && a[i] == b[i]) Console.WriteLine("Same");
      }
    }
  }
}

using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
    int ans = (Gcd(a[0],a[1]));
    for (int i = 2; i < n; i ++) ans = Gcd(ans, a[i]);
    Console.WriteLine(ans);
  }
  static int Gcd(int a, int b) {
    if (a < b) return Gcd(b, a);
    while (b != 0) {
      var remainder = a % b;
      a = b;
      b = remainder;
    }
    return a;
  }
}

using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int x = s[0];
    int k = s[1];
    int a = (int)Math.Pow(10, k);
    int y;
    for (y = a; y <= x; y += a) ;
    Console.WriteLine(y);
  }
}

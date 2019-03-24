using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int x = s[0];
    int k = s[1];
    int l = (int)Math.Pow(10, k);
    Console.WriteLine((x/l+1)*l);
  }
}

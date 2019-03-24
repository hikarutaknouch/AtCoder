using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int[] n = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    Console.WriteLine("{0} {1}", n[1], n[0]);
  }
}

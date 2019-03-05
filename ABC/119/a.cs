using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split('/').Select(int.Parse).ToArray();
    if (s[0] > 2019) Console.WriteLine("TBD");
    else {
      if (s[1] > 4) Console.WriteLine("TBD");
      else {
        Console.WriteLine("Heisei");
      }
    }
  }
}

using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
  static void Main()
  {
    List<int> input = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).Distinct().ToList();
    var count = input.Where(x => x == 1 || x == 9 || x == 7 || x == 4).Count();
    if (count == 4) Console.WriteLine("YES");
    else Console.WriteLine("NO");
  }
}

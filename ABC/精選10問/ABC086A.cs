using System;

namespace ABC086A
{
  class Program
  {
    static void Main()
    {
      string[] x = Console.ReadLine().Split(' ');
      int a = int.Parse(x[0]);
      int b = int.Parse(x[1]);

      if ((a * b) % 2 == 0)
      {
        Console.WriteLine("Even");
      }
      else
      {
        Console.WriteLine("Odd");
      }
    }
  }
}

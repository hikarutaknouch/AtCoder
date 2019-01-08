using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
  static void Main()
  {
    int N = int.Parse(Console.ReadLine());
    List<int> inputs = new List<int>();
    for (int i = 0; i < N; i ++)
    {
      inputs.Add(int.Parse(Console.ReadLine()));
    }
    Console.WriteLine(inputs.Distinct().Count());
  }
}

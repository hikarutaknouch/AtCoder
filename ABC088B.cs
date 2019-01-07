using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    List<int> inputs = Console.ReadLine().Split(' ').Select(t => int.Parse(t)).OrderByDescending().ToArray();

    int aliceSum = 0;
    int bobSum = 0;

    for (int i = 0; i < n; i ++)
    {
      if (i % 2 == 0)
      {
        aliceSum += inputs[i];
      }
      else bobSum += inputs[i];
    }
    int score = aliceSum - bobSum;
    Console.WriteLine(score);
  }
}

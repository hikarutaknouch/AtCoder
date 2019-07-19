using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
  static void Main()
  {
    int N = int.Parse(Console.ReadLine());
    string[] points = Console.ReadLine().Split(' ');
    int A = int.Parse(points[0]);
    int B = int.Parse(points[1]);

    List<int> score = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).OrderBy(x => x).ToList();
    var countA = score.Where(x => x <= A).Count();
    var countB = score.Where(x => x > A && x <= B).Count();
    var countC = score.Where(x => x > B).Count();
    int[] a = new int[] {countA, countB, countC};
    int count = a.Min();
    Console.WriteLine(count);
  }
}

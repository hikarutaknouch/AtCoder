using System;

class Program
{
  public static void Main(string[] args)
  {
    int[] x = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = x[0];
    int k = x[1];
  }
}

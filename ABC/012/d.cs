using System;

class Program
{
  static void Main(string[] args)
  {
    int[] inputs = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = inputs[0];
    int m = inputs[1];
  }
}

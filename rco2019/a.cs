using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[,] city = new int[n,2];
    for (int i = 0; i < n; i ++)
    {
      int[] input = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      city[i,0] = input[0];
      city[i,1] = input[1];
    }
  }
}

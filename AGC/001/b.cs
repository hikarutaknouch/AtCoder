using System;
using System.Linq;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    long[] inputs = Console.ReadLine().Split(' ').Select(long.Parse).ToArray();
    long n = inputs[0];
    long x = inputs[1];
    if (n/x == 2 && n % 2 == 0) Console.WriteLine((n-x)*3);
    else Console.WriteLine((n-1) * 3);
  }
}

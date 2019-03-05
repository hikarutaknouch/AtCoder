using System;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int[] inputs = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = inputs[0];
    int m = inputs[1];
  }
}

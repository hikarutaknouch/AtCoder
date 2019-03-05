using System;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    string[] s = Console.ReadLine().Split(' ');
    int n = int.Parse(s[0]);
    int a = int.Parse(s[1]);
    int b = int.Parse(s[2]);
    if (n >= a + b) Console.WriteLine("{0} {1}", Math.Min(a,b),0);
    else if (n < a + b && a + b < n * 2) Console.WriteLine("{0} {1}", Math.Min(a,b),(a+b)-n);
    else Console.WriteLine("{0} {1}", n, n);
  }
}

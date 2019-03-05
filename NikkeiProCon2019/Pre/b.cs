using System;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    string a = Console.ReadLine();
    string b = Console.ReadLine();
    string c = Console.ReadLine();
    int count = 2 * n;
    for (int i = 0; i < n; i++)
    {
      if(a[i] == b[i] && b[i] != c[i]) count --;
      if(a[i] != b[i] && b[i] == c[i]) count --;
      if(a[i] != b[i] && a[i] == c[i]) count --;
      if(a[i] == b[i] && b[i] == c[i]) count -= 2;
    }
    Console.WriteLine(count);
  }
}

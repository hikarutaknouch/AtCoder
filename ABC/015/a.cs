using System;

class Program
{
  public static void Main(string[] args)
  {
    string a = Console.ReadLine();
    string b = Console.ReadLine();
    if (a.Length > b.Length) Console.WriteLine(a);
    else Console.WriteLine(b);
  }
}

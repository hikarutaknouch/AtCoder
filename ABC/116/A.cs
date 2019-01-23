using System;

class Program
{
  static void Main()
  {
    string[] s = Console.ReadLine().Split(' ');
    int x = int.Parse(s[0]);
    int y = int.Parse(s[1]);
    int z = int.Parse(s[2]);
    Console.WriteLine((x * y) / 2);
  }
}

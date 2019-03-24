using System;

class Program
{
  static void Main(string[] args)
  {
    string[] s = Console.ReadLine().Split('a', 'i', 'u', 'e', 'o');
    for (int i = 0; i < s.Length; i ++) Console.Write(s[i]);
    Console.WriteLine();
  }
}

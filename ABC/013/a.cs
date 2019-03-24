using System;

class Program
{
  static void Main(string[] args)
  {
    string[] s = new string[] {"A", "B", "C", "D", "E"};
    string x = Console.ReadLine();
    int count = 0;
    for (int i = 0; i < s.Length; i ++)
    {
      count ++;
      if (s[i] == x) break;
    }
    Console.WriteLine(count);
  }
}

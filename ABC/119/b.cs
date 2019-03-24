using System;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    double sum = 0;
    for (int i = 0; i < n; i ++) {
      string[] s = Console.ReadLine().Split(' ').ToArray();
      double x = double.Parse(s[0]);
      string v = s[1];
      if (v == "BTC") x *= 380000;
      sum += x;
    }
    Console.WriteLine(sum);
  }
}

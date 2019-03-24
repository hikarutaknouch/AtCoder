using System;

class Program
{
  static void Main(string[] args)
  {
    int a = int.Parse(Console.ReadLine());
    int b = int.Parse(Console.ReadLine());
    int ans = a - b;
    if (ans < 0) ans = ans * -1;
    if(ans > 5) ans = 10 - ans;
    Console.WriteLine(ans);
  }
}

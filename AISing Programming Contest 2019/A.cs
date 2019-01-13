using System;

class Program
{
  static void Main()
  {
    int N = int.Parse(Console.ReadLine());
    int H = int.Parse(Console.ReadLine());
    int W = int.Parse(Console.ReadLine());
    if (H == N && W == N) Console.WriteLine(1);
    else if (H == N) Console.WriteLine(N - W + 1);
    else if (W == N) Console.WriteLine(N - H + 1);
    else Console.WriteLine((N - H + 1) * (N - W + 1));
  }
}

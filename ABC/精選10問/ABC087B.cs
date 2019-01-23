using System;

class Program
{
  static void Main()
  {
    int a = int.Parse(Console.ReadLine());
    int b = int.Parse(Console.ReadLine());
    int c = int.Parse(Console.ReadLine());
    int x = int.Parse(Console.ReadLine());

    var count = 0;

    for (int i = 0; i <= a; i ++)
    {
        for (int j = 0; j <= b; j ++)
        {
            for (int k = 0; k <= c; k ++)
            {
              int total = 500 * i + 100 * j + 50 * k;
              if (x == total) count ++;
            }
        }
    }
    Console.WriteLine(count);
  }
}

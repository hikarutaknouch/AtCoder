using System;

class Program
{
  static void Main()
  {
    string[] inputs = Console.ReadLine().Split(' ');
    int N = int.Parse(inputs[0]);
    int Y = int.Parse(inputs[1]);
    Y /= 1000;

    //Y = 10 * a + 5 * b + c;

    for (int a = 0; a <= Y / 10; a ++)
    {
      for (int b = 0; b <= Y / 5; b ++)
      {
        int c = Y - (10 * a) - (5 * b);
        if (N == a + b + c && c >= 0)
        {
          Console.WriteLine("{0} {1} {2}", a, b, c);
          goto Complete;
        }
        if (a == Y /10 && b == Y / 5 && N != a + b + c)
        {
          Console.WriteLine("-1 -1 -1");
          goto Complete;
        }
        else continue;
      }
    }
    Complete: ;
  }
}

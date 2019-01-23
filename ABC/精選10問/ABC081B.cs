using System;

namespace ABC081B
{
  class Program
  {
    static void Main()
      {
        int n = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');

        int[] x = new int[n];

        for (int i = 0; i < n; i ++)
        {
          x[i] = int.Parse(input[i]);
        }

        int count = -1;
        bool escape = true;

        while (escape)
        {
          count ++;
          for (int i = 0; i < n; i ++)
          {
            if (x[i] % 2 == 1)
            {
              escape = false;
              break;
            }
            x[i] /= 2;
          }
        }
        Console.WriteLine(count);
    }
  }
}

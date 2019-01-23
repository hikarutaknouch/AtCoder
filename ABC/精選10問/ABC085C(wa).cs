using System;

//あえてミスコード。このやり方だと1パターンしか検証できない。例えば、

class Program
{
  static void Main()
  {
    string[] inputs = Console.ReadLine().Split(' ');
    int N = int.Parse(inputs[0]);
    int Y = int.Parse(inputs[1]);

    //Y = 10000 * a + 5000 * b + 1000 * c;
    if (Y % 10000 == 0 && N == Y / 10000)
    {
      Console.WriteLine("{0} {1} {2}", Y / 10000, 0, 0);
    }
    else
    {
      int Y1 = Y % 10000;
      {
        if (Y1 % 5000 == 0 && N == (Y / 10000) + (Y1 / 5000))
        {
          Console.WriteLine("{0} {1} {2}", Y / 10000, Y1 / 5000, 0);
        }
         else
         {
           int Y2 = Y % 5000;
           {
             if (Y2 % 1000 == 0 && N == (Y / 10000) + (Y1 / 5000) + (Y2 / 1000))
             {
               Console.WriteLine("{0} {1} {2}", Y / 10000, Y1/5000, Y2/1000);
             }
             else Console.WriteLine("-1 -1 -1");
           }
         }
      }
    }
  }
}

using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    int[,] s = new int[n+1, 3];
    s[0,0] = 0;
    s[0,1] = 0;
    s[0,2] = 0;
    for (int i = 1; i <= n; i ++) {
      int[] t = Console.ReadLine().Split().Select(int.Parse).ToArray();
      s[i,0] = t[0];
      s[i,1] = t[1];
      s[i,2] = t[2];
      int time = s[i,0] - s[i-1,0];
      int x = Math.Max(s[i,1], s[i-1,1]) - Math.Min(s[i,1], s[i-1,1]);
      int y = Math.Max(s[i,2], s[i-1,2]) - Math.Min(s[i,2], s[i-1,2]);
      int length = x + y;
      if (time < length) {
        Console.WriteLine("No");
        break;
      }
      else {
        while(true) {
          if (time == length) break;
          time -= 2;
          if (time < length) {
            Console.WriteLine("No");
            goto end;
          }
        }
      }
      if (i == n) Console.WriteLine("Yes");
    }
    end:;
  }
}

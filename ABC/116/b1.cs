using System;

class Program
{
  static void Main()
  {
    int s = int.Parse(Console.ReadLine());
    int count = 0;
    while(true)
    {
      count ++;
      if(s == 1)
      {
        count ++;
        break;
      }
      else if (s % 2 == 0) s /= 2;
      else s = s * 3 + 1;
    }
    Console.WriteLine(Math.Max(4, count)); //初項s=1の時、本来出力すべきは4だが、breakしてしまうため。
  }
}

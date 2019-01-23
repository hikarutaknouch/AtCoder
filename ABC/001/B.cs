using System;

class Program
{
  static void Main()
  {
    int m = int.Parse(Console.ReadLine());
    if (m < 100) Console.WriteLine("00");//00って書くとと数値として認識するので0が出力される。なので"00"で文字列と出力させるべき。
    else if (m >= 100 && m <= 5000)
    {
      if (m < 1000) Console.WriteLine("0" + m/100);
      else Console.WriteLine(m/100);
    }
    else if (m >= 6000 && m <= 30000) Console.WriteLine(m/1000 + 50);
    else if (m >= 35000 && m <=70000) Console.WriteLine((m/1000 - 30)/5 + 80);
    else if (m > 70000) Console.WriteLine(89);
    else Console.WriteLine();
  }
}

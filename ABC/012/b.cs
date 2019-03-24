using System;

class Program
{
  static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    string h = (n / 3600).ToString().PadLeft(2, '0'); //PadLeft(i, '0')で数値文字列をi桁0埋めにする。
    string m = (n % 3600 / 60).ToString().PadLeft(2, '0');
    string s = (n % 60).ToString().PadLeft(2, '0');
    Console.WriteLine("{0}:{1}:{2}", h, m, s);
  }
}

using System;

class Program
{
  /// <summary>
  ///   The main entry point for the application
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    if (n >= 30) n = n % 30; //30回繰り返すと同じ123456に戻るので、nが30を越えた場合剰余を出す。
    int[] x = {1,2,3,4,5,6};
    int a = 0;
    int b = 0;
    for (int i = 0; i <= n -1 ; i ++)
    {
      a = (i % 5);
      b = (i % 5) + 1;
      int temp = x[a];
      x[a] = x[b];
      x[b] = temp;
    }
    for (int i = 0; i < 6; i ++)
    {
      if (i == 5) Console.WriteLine(x[i]);
      else Console.Write(x[i]);
    }
  }
}

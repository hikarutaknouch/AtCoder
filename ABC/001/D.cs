using System;

class Program
{
  static void Main()
  {
    int N = int.Parse(Console.ReadLine());
    double[,] outputs = new double[N, 2];
    for (int i = 0; i < N; i ++)
    {
      string[] inputs = Console.ReadLine().Split('-');
      outputs[i,0] = double.Parse(inputs[0]);
      outputs[i,1] = Math.Round(double.Parse(inputs[1])/10, 1, MidpointRounding.AwayFromZero);
    }
    for (int i = 0; i < N; i ++)Console.WriteLine("{0}-{1}", outputs[i,0], outputs[i,1]*10);
  }
}

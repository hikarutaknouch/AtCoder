using System;

class Program
{
  /// <summary>
  /// 三点(x,y)(a,b)(c,d)により作られる三角形の面積を求める。
  /// 三点(0,0)(a,b)(c,d)により作られる三角形の面積は (|ad-bc|/2)となるので、原点方向に並行移動させて計算する。
  /// </summary>
  [STAThread]
  public static void Main(string[] args)
  {
    string[] inputs = Console.ReadLine().Split(' ');
    double x = double.Parse(inputs[0]);//小数点第一位まで求めたいのでdouble型に。
    double y = double.Parse(inputs[1]);
    double a = double.Parse(inputs[2]);
    double b = double.Parse(inputs[3]);
    double c = double.Parse(inputs[4]);
    double d = double.Parse(inputs[5]);
    a -= x; b -= y; c -= x; d -= y;//平行移動の処理
    Console.WriteLine((((Math.Max(a * d, b * c)) - Math.Min(a * d, b * c)) / 2).ToString("f1"));//条件分岐させるのは面倒なので、Math.MaxとMath.Minで大小比較する。
  }
}

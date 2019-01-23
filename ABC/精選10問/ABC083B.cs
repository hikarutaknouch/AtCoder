using System;

class Program
{
  static void Main()
  {
    string[] s = Console.ReadLine().Split(' ');
    int N = int.Parse(s[0]);
    int A = int.Parse(s[1]);
    int B = int.Parse(s[2]);

    int sum = 0;
    int num;
    int total = 0;
    for (int i = 1; i <= N; i ++)
    {
      sum = 0;
      num = i;
      while (num > 0) //入力値が1の位になるまでつづける。
      {
        sum += num % 10; //入力値を10で割った余りを足していく。
        num /= 10;  //入力値を10で割って代入。
      }
      if (sum >= A && sum <= B) //A~Bの間にあるのか判定。
      {
        total += i;
      }
    }
    Console.WriteLine(total);
  }
}

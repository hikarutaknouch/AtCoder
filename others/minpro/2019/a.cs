using System;
using System.Linq;

class Program{
  static void Main(string[] args) {
    int[] x = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = x[0];
    int k = x[1];
    int cnt = 0;
    for(int i = 1; i <= n; i+=2) cnt ++;
    Console.WriteLine(cnt>=k ? "YES" : "NO");
  }
}

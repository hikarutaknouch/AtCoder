using System;

class Program
{
    public static int[] s = new int[3, 5, 7];
    public static int count = 0;
    public static long n = long.Parse(Console.ReadLine());
    public static void Main(string[] args) {
        Console.WriteLine(dfs(0,0));
    }
    public static void dfs() {
        long[][] array = new long[n.Length][];
        for (int i = 3; i <= n.Length; i ++) {
            for (int j = 0; j < i; j ++) {
            }
        }
    }
}
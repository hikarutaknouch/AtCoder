using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static int N;
    static char[] chr;
    static int count = 0;
    static void Main(string[] args) {
        N = int.Parse(Console.ReadLine());
        chr = Console.ReadLine().ToCharArray();
        int mod = 1000000007;
        Console.WriteLine(dfs(0, 0)%mod);
    }
    static int dfs(int n, int m) {//n=スタートの文字, m=現在の位置
        for (int i = m; i<N; i ++) {
            if (i > 0 && chr[n]==chr[m]) break;
            else {
                count ++;
                dfs(n, m+1);
            }
        }
        return count;
    }
}
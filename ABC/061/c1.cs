//これ未完
//同directoryにおけるc.csはACできたのだが、こっちはREとなる。なんで？？
//違いとしてはこちらのプログラムでは別の関数に渡しているというのがある。そのせいか？？？
using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] nk = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[][] ab = new int[nk[0]][];
        for(int i = 0; i < nk[0]; i ++) ab[i] = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(ab, nk[0], nk[1]));
    }
    static long solve(int[][] ab, int n, int k) {
        long ans = 0;
        Array.Sort(ab, (x,y) => x[0]-y[0]);
        long count = 0;
        for(int i = 0; i < n; i ++) {
            count += ab[i][1];
            if(count >= k) {
                ans = ab[i][0];
                break;
            }
        }
        return ans;
    }
}

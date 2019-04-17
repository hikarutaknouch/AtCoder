using System;

class Program
{
    static void Main(string[] args) {
        int x = int.Parse(Console.ReadLine());
        Console.WriteLine(solve(x));
    }
    static long solve(int x) {
        long ans = 1;
        for(int i = 2; i <= 1000; i ++) {
            long tmp = i;
            for(int j = 2; j <= 1000; j ++) {
                tmp = tmp * i;
                if(tmp > x) break;
                ans = Math.Max(ans, tmp);
            }
        }
        return ans;
    }
}
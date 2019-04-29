using System;
using System.Linq;

class Program
{
    static long mod = 1000000007;
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        Console.WriteLine(solve(n));
    }

    static long solve(int n) {
        long[,,,] dp = new long[n+1,4,4,4];
        dp[0,3,3,3] = 1;
        for(int i = 0; i < n; i ++) {
            for(int z = 0; z < 4; z ++) {
                for(int y = 0; y < 4; y ++) {
                    for(int x = 0; x < 4; x ++) {
                        for(int w = 0; w < 4; w ++) {
                            //a==0,g==1,c==2,t==3
                            if(w == 2 && x == 1 && y == 0) continue; //~AGC
                            if(w == 1 && x == 2 && y == 0) continue; //~ACG
                            if(w == 2 && x == 0 && y == 1) continue; //~GAC
                            if(w == 2 && y == 1 && z == 0) continue; //AG~C
                            if(w == 2 && x == 1 && z == 0) continue; //A~GC
                            dp[i+1,y,x,w] += dp[i,z,y,x];
                            dp[i+1,y,x,w] %= mod;
                        }
                    }
                }
            }
        }
        long ans = 0;
        for(int x = 0; x < 4; x ++) {
            for(int y = 0; y < 4; y ++) {
                for(int z = 0; z < 4; z ++) {
                    ans += dp[n,x,y,z];
                    ans %= mod;
                }
            }
        }
        return ans;
    }
}
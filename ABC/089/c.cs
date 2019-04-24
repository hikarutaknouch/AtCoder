using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        long[] l = new long[5] {0,0,0,0,0};
        for(int i = 0; i < n; i ++) {
           string s = Console.ReadLine();
           if(s[0]=='M') l[0] ++;
           if(s[0]=='A') l[1] ++;
           if(s[0]=='R') l[2] ++;
           if(s[0]=='C') l[3] ++;
           if(s[0]=='H') l[4] ++;
       }
       Console.WriteLine(solve(l));
    }
    static long solve(long[] l) {
        long count = 0;
        count += l[0] * l[1] * (l[2]+l[3]+l[4]);
        count += l[0] * l[2] * (l[3]+l[4]);
        count += l[0] * l[3] * l[4];
        count += l[1] * l[2] * (l[3]+l[4]);
        count += l[1] * l[3] * l[4];
        count += l[2] * l[3] * l[4];
        return count;
    }
}
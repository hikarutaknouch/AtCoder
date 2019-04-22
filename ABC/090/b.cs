using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static int solve(int a, int b) {
        int count = 0;
        for(int i = a; i <= b; i ++) {
            char[] c = i.ToString().ToCharArray();
            Array.Reverse(c);
            string s = new string(c);
            int tmp = int.Parse(s);
            if(i == tmp) count ++;
        }
        return count;
    }
}
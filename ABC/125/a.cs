using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int count = 0;
        for(int i = 1; i <= s[2]; i ++) {
            if(i%s[0]==0) count += s[1];
        }
        Console.WriteLine(count);
    }
}
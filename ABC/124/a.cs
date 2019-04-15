using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        if(s[0] == s[1]) Console.WriteLine(Math.Max(s[0],s[1])*2);
        else Console.WriteLine(Math.Max(s[0],s[1])*2 - 1);
    }
}
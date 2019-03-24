using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        if (s[1]/s[0] >= s[2]) Console.WriteLine(s[2]);
        else Console.WriteLine(s[1]/s[0]);
    }
}
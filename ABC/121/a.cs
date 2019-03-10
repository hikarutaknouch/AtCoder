using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] S = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine((S[0]-s[0])*(S[1]-s[1]));
    }
}
using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int k = int.Parse(Console.ReadLine());
        for(int i = 0; i < k; i ++) {
            Array.Sort(s);
            s[2] *= 2;
        }
        Console.WriteLine(s.Sum());
    }
}
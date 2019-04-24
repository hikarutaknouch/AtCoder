using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] l = new int[s[0]];
        for(int i = 0; i < s[0]; i ++) {
            l[i] = int.Parse(Console.ReadLine());
            s[1] -= l[i];
        }
        Array.Sort(l);
        Console.WriteLine(s[0] + s[1]/l[0]);
    }
}
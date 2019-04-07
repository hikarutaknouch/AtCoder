using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());
        int d = int.Parse(Console.ReadLine());
        int e = int.Parse(Console.ReadLine());
        int k = int.Parse(Console.ReadLine());
        int[] l = new int[10];
        l[0] = b - a;
        l[1] = c - a;
        l[2] = d - a;
        l[3] = e - a;
        l[4] = c - b;
        l[5] = d - b;
        l[6] = e - b;
        l[7] = d - c;
        l[8] = e - c;
        l[9] = e - d;
        Console.WriteLine(l.Where(x => x <= k).Count() == 10 ? "Yay!" : ":(");
    }
}
using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        int r = 0;
        int b = 0;
        for (int i = 0; i < n; i ++) {
            if (s[i] == 'R') r ++;
            else b ++;
        }
        Console.WriteLine(r > b ? "Yes" : "No");
    }
}
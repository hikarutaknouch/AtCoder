using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int s = int.Parse(Console.ReadLine());
        int max = solve(s);
        Console.WriteLine(max * 100 + max * 10 + max);
    }
    static int solve(int n) {
        List<int> digits = new List<int>();
        while(n >= 10) {
            digits.Add(n%10);
            n /= 10;
            if (n < 10) digits.Add(n);
        }
        return digits.Max();
    }
}
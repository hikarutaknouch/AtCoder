using System;
using System.Linq;

class Program
{
    public static void Main(string[] args) {
        string s = Console.ReadLine();
        int result = Math.Min(s.Count(x => x == '1'), s.Count(x => x ==  '0')) * 2;
        Console.WriteLine(result);
    }
}
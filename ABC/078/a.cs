using System;

class Program
{
    static void Main(string[] args) {
        char[] c = Console.ReadLine().ToCharArray();
        Console.WriteLine(c[0] > c[2] ? ">" : (c[0] < c[2] ? "<" : "="));
    }
}
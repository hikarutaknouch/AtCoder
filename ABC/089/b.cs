using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        HashSet<char> list = new HashSet<char>(Console.ReadLine());
        list.Remove(' ');
        Console.WriteLine(list.Count() == 4 ? "Four" : "Three");
    }
}
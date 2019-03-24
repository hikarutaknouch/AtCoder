using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args) {
        char[] s = Console.ReadLine().ToCharArray();
        List<Char> list = new List<char>();
        list.AddRange(s);
        for (int i = 0; i < list.Count()-1;) {
            if ((list[i+1].ToString() == "1" && list[i].ToString() == "0") || (list[i+1].ToString() == "0" && list[i].ToString() == "1")) {
                list.RemoveRange(i, 2);
                i --;
                if (i < 0) i = 0;
            }
            else i ++;
        }
        Console.WriteLine(s.Count()-list.Count());
    }
}
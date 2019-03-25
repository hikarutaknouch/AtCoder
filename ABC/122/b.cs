using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        string s = Console.ReadLine();
        List<string> str = new List<string>();
        for(int i = 0; i < s.Length; i ++) {
            if (s[i] != 'A' && s[i] != 'T' && s[i] != 'G' && s[i] != 'C') s = s.Replace(s[i],' ');
        }
        str = s.Split().ToList();
        string ans = "";
        for(int i = 0; i < str.Count(); i ++) {
            if (str[i].Length > ans.Length) ans = str[i];
        }
        Console.WriteLine(ans.Length);
    }
}
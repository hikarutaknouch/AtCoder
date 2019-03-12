using System;
using System.Linq;
using System.Text;

class Program
{
    static void Main(string[] args) {
        string s = Console.ReadLine();
        StringBuilder sb = new StringBuilder(s);
        while(s.Contains("WA")) {
            s = sb.Replace("WA", "AC").ToString();
        }
        Console.WriteLine(s);
    }
}
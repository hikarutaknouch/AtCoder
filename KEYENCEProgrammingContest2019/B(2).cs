using System;
using System.Text.RegularExpressions;

//namespace b
//{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            for (int i = 0; i <= "^keyence$".Length; i++)
            {
                var s = "^keyence$".Insert(i, ".*");
                if (Regex.IsMatch(str,s)) { Console.WriteLine("YES"); return; }
            }
            Console.WriteLine("NO");
        }
    }

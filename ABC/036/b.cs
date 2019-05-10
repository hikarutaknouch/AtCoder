using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        string[] s = new string[n];
        for(int i = 0; i < n; i ++) s[i] = Console.ReadLine();
        for(int i = 0; i < n; i++) {
            for(int j = n-1; j >= 0; j --) {
                if(j==0) Console.WriteLine(s[j][i]);
                else Console.Write(s[j][i]);
            }
        }
    }
}
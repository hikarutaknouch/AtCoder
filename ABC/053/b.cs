using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        string s = Console.ReadLine();
        int l = 0;
        int r = 0;
        for(int i = 0; i < s.Length; i ++) {
            if(s[i]=='A') {
                l = i;
                break;
            }
        }
        for(int i = s.Length-1; i >= 0; i --) {
            if(s[i]=='Z') {
                r = i;
                break;
            }
        }
        Console.WriteLine(r-l+1);
    }
}
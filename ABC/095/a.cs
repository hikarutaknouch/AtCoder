using System;

class Program
{
    static void Main(string[] args) {
        string s = Console.ReadLine();
        int count = 700;
        for(int i = 0; i < 3; i ++) {
            if(s[i]=='o') count += 100;
        }
        Console.WriteLine(count);
    }
}
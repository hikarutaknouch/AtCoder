using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());
        Console.WriteLine(n % digitSum(n) == 0 ? "Yes" : "No");
    }
    static int digitSum(int n) {
        Stack<int> digit = new Stack<int>();
        while(n > 0) {
            digit.Push(n%10);
            n /= 10;
        }
        return digit.ToArray().Sum();
    }
}
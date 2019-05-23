using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long n = long.Parse(Console.ReadLine());
        long l = digitLength(n);
        long f = digitFirst(n);
        Console.WriteLine((l-1)*9 + f);
    }
    static long digitLength(long x) {
        long length = 0;
        while(x>0) {
            length++;
            x /= 10;
        }
        return length;
    }
    static long digitFirst(long x) {
        long first = 0;
        List<long> digit = new List<long>();
        while(x>0) {
            first = x%10;
            digit.Add(x%10);
            x/=10;
        }
        for(int i = 0; i < digit.Count()-1; i ++) {
            if(i == digit.Count()-1) continue;
            if(digit[i] != 9) {
                first -= 1L;
                break;
            }
        }
        return first;
    }
}
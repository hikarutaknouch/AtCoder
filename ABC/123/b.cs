using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] l = new int[5];
        l[0] = int.Parse(Console.ReadLine());
        l[1] = int.Parse(Console.ReadLine());
        l[2] = int.Parse(Console.ReadLine());
        l[3] = int.Parse(Console.ReadLine());
        l[4] = int.Parse(Console.ReadLine());
        int[] t = new int[5];
        for(int i = 0; i < 5; i ++) {
            t[i] = l[i];
            for (int j = 0; j < 5; j ++) {
                if (j != i) {
                    if (l[j]%10 == 0) t[i] += l[j];
                    else t[i] += l[j] + 10 - l[j]%10;
                }
            }
        }
        Console.WriteLine(t.Min());
    }
}
using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] ab = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(ab[1]%ab[0]==0 ? ab[1]/ab[0] : ab[1]/ab[0] + 1);
    }
}
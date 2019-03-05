using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
  public static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
    int n = s[0];
    int[] abc = new int[3];
    abc[0] = s[1];
    abc[1] = s[2];
    abc[2] = s[3];
    Array.Sort(abc);
    Array.Reverse(abc);
    List<int> l = new List<int>();
    for (int i = 0; i < n; i ++) {
      l.Add(int.Parse(Console.ReadLine()));
    }
    l.OrderByDescending(x => x);
    int result = 0;
    for (int i = 0; i < abc.Count(); i ++) {
      if (l.Where(val => val == abc[i]).Count() >= 1) {
        l.Remove(abc[i]);
        abc.Remove(abc[i]);
      }
    }
    for (int i = 0; i < abc.Count(); i ++) {
      for (int j = 0; j < l.Count(); j ++) {
        if (Math.Max(abc[i], l[j])-Math.Min(abc[i],l[j])) <= 10) {
          result += Math.Max(abc[i], l[j]) - Math.Min(abc[i],l[j]);
          l.Remove(l[j]);
        }
        else {
          
        }
      }
    }
  }
}

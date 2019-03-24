using System;
using System.Text;

class Program
{
  static void Main()
  {
    string S = Console.ReadLine();
    Console.WriteLine(judge(S) ? "YES" : "NO");
  }
  static bool judge(string s) {
    StringBuilder sb = new StringBuilder(s);
    for (int i = 0; i < s.Length-1; i ++) {
      for (int j = 0; j <= s.Length - i; j ++) {
        if(sb.Remove(i, j).ToString() == "keyence") return true;
      }
    }
    return false;
  }
}

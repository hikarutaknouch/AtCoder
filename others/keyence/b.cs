using System;

class Program
{
  static void Main()
  {
    string S = Console.ReadLine();
    Console.WriteLine(judge(S) ? "YES" : "NO");
  }
  static bool judge(string s) {
    for (int i = 0; i < s.Length-1; i ++) {
      for (int j = 0; j <= s.Length - i; j ++) {
        if(s.Remove(i, j) == "keyence") return true;
      }
    }
    return false;
  }
}

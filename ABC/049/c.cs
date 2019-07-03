using System;
using System.Linq;

class Program
{
  static void Main(string[] args) {
      string s = Console.ReadLine();
      Console.WriteLine(solve(s) ? "YES" : "NO");
  }
  static bool solve(string s) {
    int n = s.Length;
    char[] a = s.ToCharArray();
    Array.Reverse(a);
    s = new String(a);
    bool ans = true;
    string tmp;
    for(int i = 0;i < n; i ++) {
      tmp = s.Substring(i,5);
      if(tmp == "esare" || tmp == "maerd") {
        i += 4;
        continue;
      }
      tmp = s.Substring(i,6);
      if(tmp == "resare") {
        i += 5;
        continue;
      }
      tmp = s.Substring(i,7);
      if(tmp == "remaerd") {
        i += 6;
        continue;
      }
      ans = false;
      break;
    }
    return ans;
  }
}
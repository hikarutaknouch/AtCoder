using System;
using System.Linq;
using System.Text;

class Program
{
  static void Main(string[] args)
  {
    string s = Console.ReadLine();
    string[] ss = {"dream","erace","dreamer","eracer"};
    while(true) {
      if(s.Length < 5) {
        if (string.IsNullOrEmpty(s)) Console.WriteLine("YES");
        else Console.WriteLine("NO");
        break;
      }
      else if (s.Length >= 5 && s.Length < 12) {
        string s1 = s.Substring(s.Length - 5, 5);
        if (s1 == ss[0]) {
          s.Remove(s.Length - 5, 5);
        }
        else if (s1 == ss[1]) {
          s.Remove(s.Length - 5, 5);
        }
        else {
          string s2 = s.Substring(s.Length - 7, 7);
          if (s2 == ss[2]) {
            s.Remove(s.Length - 7, 7);
          }
          else if (s2 == ss[3]) {
            s.Remove(s.Length - 7, 7);
          }
          else {
            Console.WriteLine("NO");
            break;
          }
        }
      }
      else {
        string s1 = s.Substring(s.Length - 5, 5);
        if (s1 == ss[0]) {
          s.Remove(s.Length - 5, 5);
        }
        else if (s1 == ss[1]) {
          s.Remove(s.Length - 5, 5);
        }
        else {
          string s2 = s.Substring(s.Length - 7, 7);
          if (s2 == ss[2]) {
            s.Remove(s.Length - 7, 7);
          }
          if (s2 == ss[3]) {
            s.Remove(s.Length - 7, 7);
          }
        }
      }
    }
  }
}

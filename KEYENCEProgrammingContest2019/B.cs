//結局とけなかったやつこれ。死にたい。
using System;
using System.Text.RegularExpressions;

class Program
{
  static void Main()
  {
    string S = Console.ReadLine();
    if (S == "keyence") Console.WriteLine("YES");
    else if ((Regex.IsMatch(S, @"^keyence")) || (Regex.IsMatch(S, @"keyence$")) ||
    ((Regex.IsMatch(S, @"^k")) || (Regex.IsMatch(S, @"eyence$"))) ||
    ((Regex.IsMatch(S, @"^ke")) || (Regex.IsMatch(S, @"yence$"))) ||
    ((Regex.IsMatch(S, @"^key")) || (Regex.IsMatch(S, @"ence$"))) ||
    ((Regex.IsMatch(S, @"^keye")) || (Regex.IsMatch(S, @"nce$"))) ||
    ((Regex.IsMatch(S, @"^keyen")) || (Regex.IsMatch(S, @"ce$"))) ||
    ((Regex.IsMatch(S, @"^keyenc")) || (Regex.IsMatch(S, @"e$"))))
    {
      Console.WriteLine("YES");
    }
    else Console.WriteLine("NO");
  }
}

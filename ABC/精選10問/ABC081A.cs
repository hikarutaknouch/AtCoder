using System;
using System.Linq;

namespace ABC081A
{
  class Program
  {
    static void Main()
    {
      var s = Console.ReadLine();
      Console.WriteLine(s.Count(x => x == '1'));
    }
  }
}

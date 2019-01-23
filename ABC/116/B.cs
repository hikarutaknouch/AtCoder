using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

class Program
{
  static void Main()
  {
    var nums = new List<int>();
    nums.Add(int.Parse(Console.ReadLine()));
    int result = 0;
    for (int i = 0; ; i ++)
    {
      if (nums[i] % 2 == 0)
      {
        nums[i + 1] /= 2;
        if(nums[i] == 1 || nums[i] == 2 || nums[i] == 4)
        {
          result = i + 4;
          break;
        }
      }
      else
      {
        nums[i + 1] = nums[i] * 3 + 1;
        if(nums[i] == 1 || nums[i] == 2 || nums[i] == 4)
        {
          result = i + 4;
          break;
        }
      }
    }
    Console.WriteLine(result);
  }
}

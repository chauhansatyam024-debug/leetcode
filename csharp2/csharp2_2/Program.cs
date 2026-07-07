using System;
using System.Collections.Generic;
namespace ConsoleApp{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> nums = new List<int>{ 1, 2, 3, 4, 5 }; // its like java + cpp
            nums.Add(6); // add at last of list
            nums.Remove(5); // remove 5 in nums list 
            nums.RemoveAt(0); // remove the value at index 0
            Console.WriteLine(nums.Count);
            Dictionary<string, int> dict = new Dictionary<string, int>();
            dict["satyam"] = 1;
            dict["vashu"] = 2;
            dict["vansh"] = 3;
            dict["shantanu"] = 4;
            dict.Add("supra", 67);
            if (dict.TryGetValue("supra", out int a))
            {
                Console.WriteLine(a);
            }

            foreach (var i in dict)
            {
                Console.WriteLine($"name is  {i.Key} and position is {i.Value}");
            }

            HashSet<int> se = new HashSet<int> { 1, 2, 3, 3, 4, 5, 6 }; // like python set , only store unique values
            foreach (var i in se)
            {
                Console.WriteLine(i);
            }
        }
    }
    

}
using System;
using ConsoleApp;
namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int score = 90;
            string s = (score / 10) switch
            {
                10 or 9 => "a",
                8 => "b",
                7 => "c",
                _ => "f"
            };
            //Console.WriteLine(s);
            new1 n = new new1();
            n.hello();
        }
    }
}
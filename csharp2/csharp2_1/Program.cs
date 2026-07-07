using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = new int[5];  // all 5 are zeroes 
            int[] scores = { 1, 2, 3, 4, 5 };
            scores[0] = 95;
            Console.WriteLine(scores.Length);
            int[,] grid = new int [5, 5]; //2-d array
            grid[2, 2] = 67; 
            int [][] jagged = new int[3][];
            jagged[0] = new int[] { 1, 2, 3, 4 };
            jagged[1] = new int[] { 5, 6, 7, 8, 9, 10 };
            foreach (int s in scores)
            {
                Console.WriteLine(s);
            }
            for (int i = 0; i < scores.Length; i++)
            {
                Console.WriteLine(scores[i]);
            }
        } 
}
    
}
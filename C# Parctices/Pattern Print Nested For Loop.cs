using System;
using System.Globalization;

namespace Loop
{
    public class NestedForLoop
    {
        public static void Main(string[] args)
        {
            // int number = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 7; i++)
            {
                for(int j = 1; j <= i; j++)
                {
                    Console.Write(j + " ");
                }
                Console.WriteLine();
            }
        }
    }
}

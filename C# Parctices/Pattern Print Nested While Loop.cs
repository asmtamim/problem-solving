using System;
using System.Globalization;

namespace Loop
{
    public class NestedWhileLoop
    {
        public static void Main(string[] args)
        {
            // int number = int.Parse(Console.ReadLine());

            int i = 1;
            while (i <= 7)
            {
                for(int j = 1; j <= i; j++)
                {
                    Console.Write(i + " ");
                }
                i = i + 1;
                Console.WriteLine();
            }
        }
    }
}

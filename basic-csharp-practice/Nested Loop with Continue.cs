using System;

namespace ContinueNested
{
    class Program
    {
        static void Main(string[] args)
        {

            for (int i = 1; i <= 3; i++) // outer loop
            {
                for (int j = 1; j <= 4; j++) // inner loop
                {
                    if (j == 3)
                        continue; // When j = 3, continue (jump) to j++ increment

                    Console.WriteLine("i = " + i + " j = " + j); // j = 3 never prints
                }
                Console.WriteLine();
            }
        }
    }
}

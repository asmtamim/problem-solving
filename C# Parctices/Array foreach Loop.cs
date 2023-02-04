using System;

namespace ForEachBreak
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] number = { 1, 2, 3, 4, 5 };

            // use of for each loop
            foreach (int i in number)
            {
                if (i == 4)
                    break; // Terminates the loop

                Console.WriteLine(i);
            }
        }
    }
}

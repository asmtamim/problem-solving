using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class FindNumberOfDigits
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a number: ");
                long num = long.Parse(Console.ReadLine());
                int count = 0;

                if (num == 0)
                {
                    count = 1;
                }
                else
                {
                    while (num > 0)
                    {
                        num = num / 10;
                        count++;
                    }
                }

                Console.WriteLine("Digit count: " + count);
            }
        }
    }
}

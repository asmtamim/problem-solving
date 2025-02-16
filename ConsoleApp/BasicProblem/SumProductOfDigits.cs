using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class SumProductOfDigits
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a number: ");
                long num = long.Parse(Console.ReadLine());
                int sum = 0, product = 1;

                if (num == 0)
                {
                    sum = 0;
                    product = 1;
                }
                else
                {
                    while (num > 0)
                    {
                        int digit = (int)(num % 10);
                        sum += digit;
                        product *= digit;
                        num = num / 10;
                    }
                }

                Console.WriteLine("Sum: " + sum);
                Console.WriteLine("Product: " + product);
            }
        }
    }
}

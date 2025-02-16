using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class FactorialNumber
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a number: ");
                int num = int.Parse(Console.ReadLine());

                long Fact = 1;
                for(int j = num; j >= 2; j--)
                {
                    Fact *= j; // Fact = Fact * j;
                }

                Console.WriteLine("Factorial of " + num + " is: " + Fact);
            }
        }
    }
}

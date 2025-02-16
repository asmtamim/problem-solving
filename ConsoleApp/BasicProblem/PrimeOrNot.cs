using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class PrimeOrNot
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a number: ");
                int num = int.Parse(Console.ReadLine());

                if(num <= 1)
                {
                    Console.WriteLine(num + " is not Prime.");
                }
                else if (CheckPrime(num))
                {
                    Console.WriteLine(num + " Prime.");
                }
                else
                {
                    Console.WriteLine(num + " is not Prime.");
                }
            }
        }

        private static bool CheckPrime(int num)
        {
            for (int j = 2; j <= Math.Sqrt(num); j++)
            {
                if (num % j == 0)
                    return false;
            }
            return true;
        }
    }
}

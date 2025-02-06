using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class PrimeBetween
    {
        public static void Run()
        {
            Console.Write("Enter the 1st number: ");
            int start = int.Parse(Console.ReadLine());
            Console.Write("Enter the 2nd number: ");
            int end = int.Parse(Console.ReadLine());

            for (int i = start; i <= end; i++)
            {
                if (CheckPrime(i))
                {
                    Console.Write(i + " ");
                }
            }

            Console.WriteLine();
        }

        private static bool CheckPrime(int num)
        {
            if (num <= 1)
                return false;

            for (int j = 2; j <= num / 2; j++)
            {
                if (num % j == 0)
                    return false;
            }

            return true;
        }
    }
}

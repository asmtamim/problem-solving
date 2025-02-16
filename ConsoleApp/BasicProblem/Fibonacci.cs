using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class Fibonacci
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter the number of terms: ");
                int num = int.Parse(Console.ReadLine());

                int first = 0, second = 1;

                for (int j = 0; j < num; j++)
                {
                    Console.Write(first + " "); 

                    int next = first + second; 
                    first = second; 
                    second = next;
                }

                Console.WriteLine();
            }
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class Swap2Numbers
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.WriteLine("Enter 2 numbers with space:");
                string[] inputs = Console.ReadLine().Split(' ');

                int num1 = int.Parse(inputs[0]);
                int num2 = int.Parse(inputs[1]);

                int temp = num1;
                num1 = num2;
                num2 = temp;

                Console.WriteLine("Swapped numbers:");
                Console.WriteLine(num1 + " " + num2);
            }
        }
    }
}

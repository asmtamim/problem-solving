using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class StringReverse
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a string:");
                string input = Console.ReadLine();
                //string reverse = new string(input.Reverse().ToArray());

                char[] temp = new char[input.Length];
                for (int x = 0, y = input.Length - 1; x < input.Length; x++, y--)
                {
                    temp[y] = input[x];
                }

                string reverse = new string(temp);

                Console.WriteLine("Reversed: " + reverse);
            }
        }
    }
}

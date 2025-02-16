using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class LeapYear
    {
        public static void Run()
        {
            Console.Write("Enter test case: ");
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                Console.Write("Enter a year: ");
                int year = int.Parse(Console.ReadLine());

                if (year % 400 == 0) {
                    Console.WriteLine("Leap Year!");
                }
                else if (year % 4 == 0 && year % 100 != 0) {
                    Console.WriteLine("Leap Year!");

                }
                else {
                    Console.WriteLine("Not Leap Year!");
                }
            }
        }
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class IntArraySort
    {
        public static void Run()
        {
            Console.Write("Array size: ");
            int num = int.Parse(Console.ReadLine());
            int[] intArray = new int[num];

            Console.WriteLine("Array elements: ");
            for (int j = 0; j < num; j++)
            {
                intArray[j] = int.Parse(Console.ReadLine());
            }

            Array.Sort(intArray);

            Console.Write("Sorted: ");
            for (int k = 0; k < num; k++)
            {
                Console.Write(intArray[k] + " ");
            }
        }
    }
}

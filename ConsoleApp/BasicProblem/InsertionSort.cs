using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class InsertionSort
    {
        public static void Run()
        {
            Console.WriteLine("Array: ");
            string[] inputs = Console.ReadLine().Split(' ');

            int aSize = inputs.Length;
            // Parse inputs into integer array
            int[] intArray = new int[aSize];
            for (int i = 0; i < aSize; i++)
            {
                intArray[i] = int.Parse(inputs[i]);
            }

            // Insertion Sort
            for (int i = 1; i < aSize; i++)
            {
                int key = intArray[i];
                int j = i-1;
                
                while (j >= 0 && intArray[j] > key) // Move elements
                {
                    intArray[j+1] = intArray[j];
                    j--;
                }
                intArray[j+1] = key;
            }

            Console.WriteLine("Sorted: ");
            Console.WriteLine(string.Join(" ", intArray));
        }
    }
}

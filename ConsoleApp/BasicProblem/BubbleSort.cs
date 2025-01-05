using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.BasicProblem
{
    internal class BubbleSort
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

            // Bubble Sort
            for (int i = 0; i < aSize-1; i++)
            {
                for(int j = 0; j < aSize-i-1; j++)
                {
                    if (intArray[j] > intArray[j+1]) // Swap
                    {
                        int temp = intArray[j];
                        intArray[j] = intArray[j+1];
                        intArray[j+1] = temp;
                    }
                }
            }
            Console.WriteLine("Sorted: ");
            Console.WriteLine(string.Join(" ", intArray));
        }
    }
}

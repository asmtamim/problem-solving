using System;
using System.Linq; // provides us various methods to use in an array

namespace ArrayMinMaxAvg
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] numbers = new int[7] { 1, 2, 3, 4, 5, 6, 7 };

            // get the minimum element
            Console.WriteLine("Smallest  Element: " + numbers.Min());

            // get the maximum element
            Console.WriteLine("Largest Element: " + numbers.Max());

            // get the average of the elements
            Console.WriteLine("Average: " + numbers.Average());

        }
    }
}

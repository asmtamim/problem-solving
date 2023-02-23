using System;
namespace MaxConsecutive
{
    public class ConsecutiveOne
    {
        public static void Main(string[] args)
        {
            Console.Write("Enter input string: ");
            string[] values = Console.ReadLine().Split(' ');

            int count = 0;
            int result = 0;

            for (int i = 0; i < values.Length; i++)
            {
                if (values[i] == "1")
                {
                    count++;
                    result = Math.Max(result, count);
                }    

                else
                    count = 0;
            }
            
            Console.WriteLine("Maximum Consecutive 1's is {0}", result);
        }
    }
}

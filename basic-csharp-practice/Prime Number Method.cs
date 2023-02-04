using System;
namespace Random
{
    public class PrimeCheck
    {
        public static void Main(string[] args)
        {
            int number = int.Parse(Console.ReadLine());

            bool result = IsPrime(number);
            
            // Result output.

            if (result) 
                Console.WriteLine("Prime.");
            else 
                Console.WriteLine("Not Prime.");

            bool IsPrime(int num)
            {
                if (num < 2)
                    return false;
                else
                {
                    for (int i = 2; i <= Math.Sqrt(num); i++)
                    {
                        if (num % i == 0)
                        {
                            return false;
                        }
                    }
                    return true;
                }
            }
        }
    }
}

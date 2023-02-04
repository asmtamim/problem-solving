using System;
namespace Random
{
    public class PrimeCheck
    {
        public static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());

            if (num < 2)
                Console.WriteLine("{0} not Prime.", num);
            else
            {

                bool divided = false;
                for (int i = 2; i <= Math.Sqrt(num); i++)
                {
                    if (num % i == 0)
                    {
                        Console.WriteLine("{0} is not Prime.", num);
                        divided = true;
                        break;
                    }
                }

                if (!divided)
                    Console.WriteLine("{0} is Prime.", num);
            }
        }
    }
}

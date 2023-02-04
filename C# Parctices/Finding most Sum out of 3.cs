using System;
namespace CodeChef 
{
    public class ChefSpell
    {
        public static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                string[] values = Console.ReadLine().Split(' ');
                int A = int.Parse(values[0]);
                int B = int.Parse(values[1]);
                int C = int.Parse(values[2]);

                int sum1 = A + B;
                int sum2 = B + C;
                int sum3 = A + C;

                if (sum1 >= sum2 && sum1 >= sum3)
                {
                    Console.WriteLine(sum1);
                }
                else if (sum2 >= sum1 && sum2 >= sum3)
                {
                    Console.WriteLine(sum2);
                }
                else
                {
                    Console.WriteLine(sum3);
                }
            }
        }
    }
}

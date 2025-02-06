using System;
namespace Codeforces
{
    public class HitTheLottery
    {
        public static void Main(string[] args)
        {
            int[] arr = { 100, 20, 10, 5, 1 };
            int N = int.Parse(Console.ReadLine());

            int bills = 0;

            for (int i = 0; i < 5; i++)
            {
                int temp = (N / arr[i]);
                bills = bills + temp;

                N = (N % arr[i]);
            }
            Console.WriteLine(bills);
        }
    }
}

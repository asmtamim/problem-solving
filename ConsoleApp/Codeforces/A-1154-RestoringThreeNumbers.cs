using System;
namespace Codeforces
{
    public class RestoringThreeNumbers
    {
        public static void Main(string[] args)
        {
            string[] values = Console.ReadLine().Split(' ');
            int[] arr = new int[4];

            for (int i = 0; i < 4; i++)
            {
                arr[i] = int.Parse(values[i]);
            }

            Array.Sort(arr);
            int c = arr[3] - arr[0];
            int b = arr[2] - c;
            int a = arr[3] - (b + c);

            Console.WriteLine("{0} {1} {2}",a,b,c);
        }
    }
}
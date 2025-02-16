using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.Codeforces
{
    internal class A1154_RestoringThreeNumbers
    {
        public static void Run()
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

            Console.WriteLine("{0} {1} {2}", a, b, c);
        }
    }
}

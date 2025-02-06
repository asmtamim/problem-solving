using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.CodeChef
{
    internal class BigAchiever
    {
        public static void Run()
        {
            int T = int.Parse(Console.ReadLine());
            for (int i = 1; i <= T; i++)
            {
                int N = int.Parse(Console.ReadLine());
                int[] intArray = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                int flag = 0;
                foreach (int num in intArray) 
                {
                    if(num > flag)
                    {
                        Console.Write("1 ");
                        flag = num;
                    }
                    else
                    {
                        Console.Write("0 ");
                    }
                }
                Console.WriteLine(); 
            }
        }
    }
}

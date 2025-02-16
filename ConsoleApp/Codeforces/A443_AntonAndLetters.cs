using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.Codeforces
{
    internal class A443_AntonAndLetters
    {
        public static void Run()
        {
            string str = Console.ReadLine();

            int i, j, num = 0;
            for (i = 1; i < str.Length - 1; i++)
            {
                for (j = 0; j < i; j++)
                {
                    if (str[i] == str[j])
                        break;
                }

                if ((i == j) && str[i] >= 'a' && str[i] <= 'z')
                    num++;
            }

            Console.WriteLine(num);
        }
    }
}

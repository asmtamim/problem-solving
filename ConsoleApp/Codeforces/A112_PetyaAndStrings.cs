using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp.Codeforces
{
    internal class A112_PetyaAndStrings
    {
        public static void Run()
        {
            string str1 = Console.ReadLine();
            string str2 = Console.ReadLine();

            str1 = str1.ToLower();
            str2 = str2.ToLower();

            if (str1 == str2)
            {
                Console.WriteLine("0");
            }
            else
            {
                for (int i = 0; i < str1.Length; i++)
                {
                    if (str1[i] < str2[i])
                    {
                        Console.WriteLine("-1");
                        break;
                    }
                    if (str1[i] > str2[i])
                    {
                        Console.WriteLine("1");
                        break;
                    }
                }
            }
        }
    }
}

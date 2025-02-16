using System;
namespace Codeforces
{
    public class AntonAndLetters
    {
        public static void Main(string[] args)
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

                if ((i == j) && str[i]>='a' && str[i]<='z')
                    num++;
            }

            Console.WriteLine(num);
        }
    }
}
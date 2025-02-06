using System;
namespace Codeforces
{
    public class BMakeAP
    {
        public static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            for (int i = 1; i <= T; i++)
            {
                long a, b, c;
                string[] values = Console.ReadLine().Split(' ');

                a = long.Parse(values[0]);
                b = long.Parse(values[1]);
                c = long.Parse(values[2]);

                long m = -1;

                if ((2*b-c) % a == 0 && (2*b-c) > 0)
                {
                    m = (2*b-c) / a;
                }
                else if ((a+c) % (2*b) == 0)
                {
                    m = (a+c) / (2*b);
                }
                else if ((2*b-a) % c == 0 && (2*b-a) > 0)
                {
                    m = (2*b-a) / c;
                }



                if (m == -1){
                    Console.WriteLine("NO");
                }
                else{
                    Console.WriteLine("YES");
                }

            }
        }
    }
}
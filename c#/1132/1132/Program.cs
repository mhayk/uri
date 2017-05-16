using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1132
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, sum;

            sum = 0;

            a = Int32.Parse(Console.ReadLine());
            b = Int32.Parse(Console.ReadLine());

            if (a < b)
            {
                for (int i = a; i <= b; i++)
                {
                    if (!((i % 13) == 0))
                    {
                        sum += i;
                    }                      
                }
            }
            else
            {
                for (int i = b; i <= a; i++)
                {
                    if (!((i % 13) == 0))
                        sum += i;
                }
            }
            Console.WriteLine(sum);

            Console.ReadLine();
        }
    }
}

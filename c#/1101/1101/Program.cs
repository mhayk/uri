using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1101
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] num;
            int a, b, min, max,sum;


            while((num = Console.ReadLine().Split(' ')) != null)
            {
                a = Convert.ToInt32(num[0]);
                b = Convert.ToInt32(num[1]);

                if (a == 0 || a < 0)
                    return;

                if (b == 0 || b < 0)
                    return;

                sum = 0;

                if (a < b)
                {
                    min = a;
                    max = b;
                }
                else
                {
                    min = b;
                    max = a;
                }

                for(int i=min; i <= max; i++)
                {
                    Console.Write("{0} ", i);
                    sum += i;
                }
                Console.WriteLine("Sum={0}", sum);
            }
        }
    }
}

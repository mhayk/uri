using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1116
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] num;
            int quant;
            decimal a,b;

            quant = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < quant; i++)
            {
                num = Console.ReadLine().Split(' ');
                a = Convert.ToDecimal(num[0]);
                b = Convert.ToDecimal(num[1]);
                if (b == 0)
                {
                    Console.WriteLine("divisao impossivel");
                    continue;
                }
                Console.WriteLine("{0:0.0}",a/b);
            }
        }
    }
}

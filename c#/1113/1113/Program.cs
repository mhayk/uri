using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1113
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] num;
            int a, b, min, max, sum;


            while ((num = Console.ReadLine().Split(' ')) != null)
            {
                a = Convert.ToInt32(num[0]);
                b = Convert.ToInt32(num[1]);

                if (a == b )
                    return;

                if (a < b)
                    Console.WriteLine("Crescente");
                else
                    Console.WriteLine("Decrescente");

            }
        }
    }
}

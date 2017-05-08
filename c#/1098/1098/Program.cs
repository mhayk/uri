using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1098
{
    class Program
    {
        static void Main(string[] args)
        {
            decimal i, j;
            int num;
            for(i = 0; i <= 2; i += 0.2m)
            {
                for(j = 1; j <= 3; j++)
                {
                    if( i == 0 || i == 1 || i == 2 )
                        Console.WriteLine("I={0:0} J={1:0}", i, i + j);
                    else
                        Console.WriteLine("I={0:0.0} J={1}", i, i + j);
                }
            }
            Console.ReadLine();
        }
    }
}

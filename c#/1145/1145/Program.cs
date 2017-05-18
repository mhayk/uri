using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1145
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y;
            string[] input;

            input = Console.ReadLine().Split(' ');
            x = Convert.ToInt32(input[0]);
            y = Convert.ToInt32(input[1]);

            for (int i=1; i<=y; i++)
            {
                
                if ((i % x) == 0)
                    Console.WriteLine(i);
                else
                    Console.Write("{0} ", i);
            }
            Console.ReadLine();
        }
    }
}

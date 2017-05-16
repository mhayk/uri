using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1133
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y;
            x = Convert.ToInt32(Console.ReadLine());
            y = Convert.ToInt32(Console.ReadLine());
            if (x < y)
            {
                for (int i = x+1; i < y; i++)
                {
                    if (((i % 5) == 2) || ((i % 5) == 3))
                        Console.WriteLine(i);
                }
            }
            else if(x > y)
            {
                for (int i = y+1; i <= x; i++)
                {
                    if ( ((i % 5) == 2) || ((i % 5) == 3) )
                        Console.WriteLine(i);
                }
            }
            Console.ReadLine();
        }
    }
}

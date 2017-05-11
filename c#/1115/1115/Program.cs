using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1115
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] num;
            int x, y;

            while( (num = Console.ReadLine().Split(' ')) != null)
            {
                x = Convert.ToInt32(num[0]);
                y = Convert.ToInt32(num[1]);

                if (x == 0 || y == 0)
                    return;

                if ((x > 0) && (y > 0))
                    Console.WriteLine("primeiro");

                if ((x < 0) && (y > 0))
                    Console.WriteLine("segundo");

                if ((x < 0) && (y < 0))
                    Console.WriteLine("terceiro");

                if ((x > 0) && (y < 0))
                    Console.WriteLine("quarto");
            }
        }
    }
}

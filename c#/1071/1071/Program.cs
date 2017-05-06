using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1071
{
    class URI
    {
        static void Main(string[] args)
        {
            int x, y, soma = 0;

            x = Convert.ToInt32(Console.ReadLine());
            y = Convert.ToInt32(Console.ReadLine());

            if ((x % 2) == 0)
            {
                for (int i = x - 1; i > y; i -= 2)
                {
                    soma += i;
                }
            }
            else
            {
                for (int i = x - 2; i > y; i -= 2)
                {
                    soma += i;
                }
            }
            Console.WriteLine(soma);

            Console.ReadKey();
        }
    }

}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1080
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,position,aux;

            num = aux = position = 0;

            for (int i = 1; i <= 5; i++)
            {
                aux = Int32.Parse(Console.ReadLine());
                if (num < aux)
                {
                    num = aux;
                    position = i;
                }
            }
            Console.WriteLine(num);
            Console.WriteLine(position);

            Console.ReadLine();
        }
    }
}

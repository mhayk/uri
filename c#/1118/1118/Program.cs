using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1118
{
    class Program
    {
        static void Main(string[] args)
        {
            decimal num;
            int option;
            List<decimal> list = new List<decimal>();

            do
            {
                list.Clear();
                do
                {
                    num = Convert.ToDecimal(Console.ReadLine());
                    if ((num > 0) && (num <= 10))
                        list.Add(num);
                    else
                        Console.WriteLine("nota invalida");

                }
                while (list.Count() < 2);
                Console.WriteLine("media = {0:0.00}", (list.ElementAt(0) + list.ElementAt(1)) / 2);

                do
                {
                    Console.WriteLine("novo calculo (1-sim 2-nao)");
                    option = Convert.ToInt32(Console.ReadLine());
                } while( (option < 1) || (option > 2) );
            }
            while (option == 1);
            Console.ReadLine();
        }
    }
}

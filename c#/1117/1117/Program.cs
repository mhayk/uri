using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1117
{
    class Program
    {
        static void Main(string[] args)
        {
            decimal num;
            List<decimal> list = new List<decimal>();
            
            do
            {
                num = Convert.ToDecimal(Console.ReadLine());
                if ((num > 0) && (num <= 10))
                    list.Add(num);
                else
                    Console.WriteLine("nota invalida");

            }
            while ( list.Count() < 2);
            Console.WriteLine("media = {0:0.00}", (list.ElementAt(0)+list.ElementAt(1))/2);
            Console.ReadLine();
        }
    }
}

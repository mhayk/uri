using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1074
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,aux;

            num = Convert.ToInt32(Console.ReadLine());

            for(int i=0; i < num; i++)
            {
                aux = Convert.ToInt32(Console.ReadLine());
                if( aux == 0 )
                {
                    Console.WriteLine("NULL");
                }
                if ( ((aux % 2) == 0) && (aux != 0) )
                {
                    Console.Write("EVEN ");
                }
                else if(aux != 0)
                    Console.Write("ODD ");

                if (aux > 0)
                    Console.WriteLine("POSITIVE");
                else if( aux < 0)
                    Console.WriteLine("NEGATIVE");
            }
            Console.ReadLine();
        }
    }
}

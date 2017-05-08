using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1097
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, j,l;
            l = 7;
            for (i=1; i <= 9; i+=2)
            {
                
                for(j=l; j >= l-2; j-- )
                {
                    Console.WriteLine("I={0} J={1}",i,j);
                }
                l += 2;
            }
            Console.ReadLine();
        }
    }
}

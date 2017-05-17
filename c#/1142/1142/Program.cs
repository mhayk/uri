using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1142
{
    class Program
    {
        static void Main(string[] args)
        {
            int n,j,l;
            n = Convert.ToInt32(Console.ReadLine());
            j = 1;
            l = 0;
            for(int i=1; i <= n; i++ )
            {
                l = l + 4;
                for (; j <= l; j++)
                {
                    if (((j % 4) == 0))
                        Console.WriteLine("PUM");
                    else
                        Console.Write("{0} ",j);
                }
               
            }
            Console.ReadLine();
        }
    }
}

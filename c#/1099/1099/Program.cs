using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1099
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,x,y,sum;
            string[] values;
            num = Convert.ToInt32(Console.ReadLine());
            
            for(int i = 0; i < num; i++)
            {
                sum = 0;
                values = Console.ReadLine().Split(' ');
                x = Convert.ToInt32(values[0]);
                y = Convert.ToInt32(values[1]);
                if( x < y)
                {
                    for (int j = x+1; j < y; j++)
                    {
                        if( (j % 2) != 0)
                        sum += j;
                    }
                }
                else
                {
                    for (int j = y+1; j < x; j++)
                    {
                        if ((j % 2) != 0)
                            sum += j;
                    }
                }
                Console.WriteLine(sum);
            }
            Console.ReadLine();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1072
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,numIn,numOut;
            int[] numbers;
            numbers = new int[10000];

            num = Convert.ToInt32(Console.ReadLine());

            for(int i=0; i < num; i++)
            {
                numbers[i] = Convert.ToInt32(Console.ReadLine());
            }
            numIn = numOut = 0;
            for (int i=0; i < num; i++)
            {
                if ( (numbers[i] >= 10) && (numbers[i] <= 20) )
                    numIn++;
                else
                    numOut++;
            }
            Console.WriteLine(numIn + " in");
            Console.WriteLine(numOut + " out");
            Console.ReadLine();
        }
    }
}

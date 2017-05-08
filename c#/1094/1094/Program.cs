using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1094
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,totalC,totalR,totalS,total;
            string[] info;
            num = Convert.ToInt32(Console.ReadLine());

            totalC = totalR = totalS = total =  0;

            for(int i = 0; i < num; i++)
            {
                info =  Console.ReadLine().Split(' ');
                if (info[1] == "C")
                {
                    totalC += Convert.ToInt32(info[0]);
                }
                else if (info[1] == "R")
                {
                    totalR += Convert.ToInt32(info[0]);
                }
                else if (info[1] == "S")
                    totalS += Convert.ToInt32(info[0]);
            }
            total = totalC + totalR + totalS;
            Console.WriteLine("Total: {0} cobaias", total);
            Console.WriteLine("Total de coelhos: {0}", totalC);
            Console.WriteLine("Total de ratos: {0}", totalR);
            Console.WriteLine("Total de sapos: {0}", totalS);
            Console.WriteLine("Percentual de coelhos: {0:0.00} %", ( (Decimal) totalC / (Decimal) total )*100.00m);
            Console.WriteLine("Percentual de ratos: {0:0.00} %", ((Decimal)totalR / (Decimal)total) * 100.00m);
            Console.WriteLine("Percentual de sapos: {0:0.00} %", ((Decimal)totalS / (Decimal)total) * 100.00m);

            Console.ReadLine();
        }
    }
}

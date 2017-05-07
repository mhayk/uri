using System;

namespace _1079
{
    class Program
    {
        static void Main(string[] args)
        {
            int num,i;
            string temp;
            string[] aux;         

            num = Int32.Parse(Console.ReadLine().Trim());
            
            for(i=1; i <= num; i++)
            {
                temp = Console.ReadLine().Trim();
                aux = temp.Split();

                decimal a = Decimal.Parse(aux[0]);
                decimal b = Decimal.Parse(aux[1]);
                decimal c = Decimal.Parse(aux[2]);
                decimal total = (((a * 2) + (b * 3) + (c * 5)) / 10);
                Console.WriteLine( Math.Round(total,1));
               
            }
            Console.ReadLine();
        }
    }
}

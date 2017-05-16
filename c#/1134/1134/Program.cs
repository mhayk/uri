using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1134
{
    class Program
    {
        static void Main(string[] args)
        {
            int totalAlcool, totalGasolina, totalDiesel, value;

            totalAlcool = totalGasolina = totalDiesel = 0;

            do
            {
                value = Convert.ToInt32(Console.ReadLine());
                switch (value)
                {
                    case 1:
                        totalAlcool++;
                        break;
                    case 2:
                        totalGasolina++;
                        break;
                    case 3:
                        totalDiesel++;
                        break;
                    default:
                        break;
                }

            } while (value != 4);
            Console.WriteLine("MUITO OBRIGADO");
            Console.WriteLine("Alcool: {0}",totalAlcool);
            Console.WriteLine("Gasolina: {0}",totalGasolina);
            Console.WriteLine("Diesel: {0}", totalDiesel);
            Console.ReadLine();
        }
    }
}

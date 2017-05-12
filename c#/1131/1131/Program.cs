using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1131
{
    class Program
    {
        static void Main(string[] args)
        {
            int vitoraInter, vitoriaGremios, empate, grenais, option;
            string[] gols;
            vitoraInter = vitoriaGremios = grenais = empate = 0;

            do
            {
                gols = Console.ReadLine().Split(' ');
                if (Convert.ToInt32(gols[0]) > Convert.ToInt32(gols[1]))
                    vitoraInter++;
                else if ((Convert.ToInt32(gols[0]) < Convert.ToInt32(gols[1])))
                    vitoriaGremios++;
                else
                    empate++;

                grenais++;
                Console.WriteLine("Novo grenal (1-sim 2-nao)");
                option = Convert.ToInt32(Console.ReadLine());
            } while (option == 1);

            Console.WriteLine("{0} grenais",grenais);
            Console.WriteLine("Inter:{0}", vitoraInter);
            Console.WriteLine("Gremio:{0}", vitoriaGremios);
            Console.WriteLine("Empates:{0}", empate);
            if (vitoraInter > vitoriaGremios)
                Console.WriteLine("Inter venceu mais");
            else
                Console.WriteLine("Gremio venceu mais");

            Console.ReadLine();
        }
    }
}

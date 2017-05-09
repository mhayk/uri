using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1114
{
    class Program
    {
        static void Main(string[] args)
        {
            string num;

            while ((num = Console.ReadLine()) != null)
            {
                if (num == "2002")
                {
                    Console.WriteLine("Acesso Permitido");
                    return;
                }
                else
                    Console.WriteLine("Senha Invalida");
            }
        }
    }
}

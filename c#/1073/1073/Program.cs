﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1073
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;

            num = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= num; i++)
            {
                if( (i % 2) == 0)
                {
                    Console.WriteLine(i + "^2 = " + Math.Pow(i, 2));
                }
                
            }
            Console.ReadLine();
        }
    }
}

using System;

namespace Q_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is for calulate simple intresrt");
            Console.WriteLine("enter value principal amount:");
            double p = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("enter value rate :");
            double r = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("enter value number of year :");
            double n = Convert.ToDouble(Console.ReadLine());
            double simple_intrest = (p * r * n) / 100;
            Console.WriteLine("simpale intrest of yopur amount {0} is : {1}",p,simple_intrest);


        }
    }
}

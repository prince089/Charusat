using System;

namespace Q_24
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("basic meth boys");
            Console.WriteLine("enter no1");
            double no1 = double.Parse(Console.ReadLine());
            Console.WriteLine("enter no2");
            double no2 = double.Parse(Console.ReadLine());
            Console.WriteLine("you answer is{0}",no1/no2);
        }
    }
}

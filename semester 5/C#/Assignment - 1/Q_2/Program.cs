using System;

namespace Q_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is for calculate area of triangle =>>>>");
            Console.WriteLine("enter value of hight");

            double hight = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("enter value of base");
            double b = Convert.ToDouble(Console.ReadLine());
            double answer = 0.5 * hight * b;
            Console.WriteLine("area of triangle is {0}",answer);

        }
    }
}

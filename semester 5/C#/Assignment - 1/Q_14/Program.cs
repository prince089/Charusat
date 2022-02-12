using System;

namespace Q_14
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("no way!");
            Console.WriteLine("enter no1");
            double no1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("enter no2");
            double no2 = Convert.ToDouble(Console.ReadLine());

            if(Convert.ToBoolean(no1 % no2)) {
                Console.WriteLine("it is not divisible");
            }
            else
            {
                Console.WriteLine("it is divisible");
            }
            

           
        }
    }
}

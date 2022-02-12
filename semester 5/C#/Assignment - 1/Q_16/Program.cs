using System;

namespace Q_16
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("not bad not bad now you");
           
            Console.WriteLine("enter no1");
            double no1 = Convert.ToDouble(Console.ReadLine());
            
            if (Convert.ToBoolean(no1 % 2))
            {
                Console.WriteLine("it is odd");
            }
            else
            {
                Console.WriteLine("it is even");
            }

        }
    }
}

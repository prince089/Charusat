using System;

namespace Q_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("why you want to do this");

            Console.WriteLine("enter no1");
            int no1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter no2");
            int no2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter no3");
            int no3 = Convert.ToInt32(Console.ReadLine());

            if (no1 == no2)
            {
                Console.WriteLine("you have some value equal");
            }
            else if (no2 == no3)
            {
                Console.WriteLine("you have some value equal");
            }
            else if (no1 == no3)
            {
                Console.WriteLine("you have some value equal");
            }

            else
            {
                Console.WriteLine("you dosent have any same value");
            }
        }
    }
}

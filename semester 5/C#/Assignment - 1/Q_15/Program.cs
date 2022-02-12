using System;

namespace Q_15
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is something for littel boy");

            Console.WriteLine("enter no1");
            int no1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter no2");
            int no2 = Convert.ToInt32(Console.ReadLine());


            if (no1 == no2 || (no1 - no2) == 5 )
            {
                Console.WriteLine("you are right dude");
            }


            else
            {
                Console.WriteLine("no way you dont enter that special value");
            }
        }
    }
}

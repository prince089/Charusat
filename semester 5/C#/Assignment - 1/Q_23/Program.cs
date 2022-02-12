using System;

namespace Q_23
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("something depend on you");
            Console.WriteLine("enetr min nuber of your range");
            int min = int.Parse(Console.ReadLine());
            Console.WriteLine("enetr max nuber of your range");
            int max = int.Parse(Console.ReadLine());
            if (min > max)
            {
                Console.WriteLine("this code is not for you because you dont know the simple math rule");
                return;

            }
            Console.WriteLine("eneter your number");
            int no = int.Parse(Console.ReadLine());

            

            if (no > min && no < max)
            {
                Console.WriteLine("congo your number in range");

            }

            else {
                Console.WriteLine("your number not in range");
            }

        }
    }
}

using System;

namespace Q_20
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is not6 crazy");
            int no1 = int.Parse(Console.ReadLine());

            if (no1 > 0 && no1 < 100) {
                Console.WriteLine("your number is in 0 to 100");
            }
            else if (no1 > 100 && no1 < 1000) {
                Console.WriteLine("your number is in 0 to 1000");
            }
            else if (no1 > 1000 && no1 < 2000)
            {
                Console.WriteLine("your number is in 0 to 2000");
            }
        }
    }
}

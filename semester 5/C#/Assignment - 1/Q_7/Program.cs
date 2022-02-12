using System;

namespace Q_7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(" calculate gcd");
            double gcd = 0;
            Console.WriteLine("enter value of number 1");
            int n1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter value of number 2");
            int n2 = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i <= n1 && i <= n2; ++i)
            {
                // Checks if i is factor of both integers
                if (n1 % i == 0 && n2 % i == 0)
                    gcd = i;
            }
            Console.WriteLine("gcd of two number {0} and {1} gcd is {2}", n1, n2, gcd);
        }
    }
}

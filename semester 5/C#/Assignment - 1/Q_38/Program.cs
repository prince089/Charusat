using System;

namespace Q_38
{
    class Program
    {
        public static int Fib(int n)
        {
            if (n <= 1)
            {
                return n;
            }
            else
            {
                return Fib(n - 1) + Fib(n - 2);
            }
        }

  
        public static void Main(string[] args)
        {
            int n = 9;
            Console.Write(Fib(n));
        }
    }
}

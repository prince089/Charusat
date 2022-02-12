using System;

namespace Q_10
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("something in math");
            Console.WriteLine("enter value of x");
            int x = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter value of y");
            int y = Convert.ToInt32(Console.ReadLine());
            int answer = (x * x) + (2 * (x * y)) + (y * y);
            Console.WriteLine("your answer is {0}",answer);
        }
    }
}


    using System;

namespace Q_25
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("time to second");
            Console.WriteLine("enter value in minite");
            int time = Convert.ToInt32(Console.ReadLine());
            int second = time * 60;
            Console.WriteLine("you have {0} minite in your life and if we convert in to second then {1} this is second remain in your life", time, second);
        }
    }
}

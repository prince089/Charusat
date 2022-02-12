using System;

namespace Q_29
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("something befor after");
            Console.WriteLine("enetr your number ");
            int no1 = int.Parse(Console.ReadLine());
            Console.WriteLine("with + 1 your number is : {0} \nwith -1 your number is {1}",no1 + 1,no1 - 1);
        }
    }
}

using System;

namespace Q_26
{
    class Program
    {
        static void Main(string[] args) {
            Console.WriteLine("enter nuber of hour");
            double hour = double.Parse(Console.ReadLine());
            Console.WriteLine("total second of your hour is {0} :{1}",hour , hour*3600);
        }
        
    }
}

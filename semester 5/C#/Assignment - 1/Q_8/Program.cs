using System;

namespace Q_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("display information");
            Console.WriteLine("enter name");
            string name = Console.ReadLine();
            Console.WriteLine("enter age");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter address");
            string addr = Console.ReadLine();

            Console.WriteLine("\n name: {0} \n age : {1} \n address : {2}",name,age,addr);
             
        }
    }
}

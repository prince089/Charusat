using System;

namespace Q_21
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("nice thing dude");
            Console.WriteLine("enter no 1");
            int no1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter no 2");
            int no2 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter no 3");
            int no3 = int.Parse(Console.ReadLine());

            if (no1 == no2 && no1 == no2 && no2 == no3) {
                Console.WriteLine("your sum is{0}",(no1 + no2 + no3) *3);

            }
            else
            {
                Console.WriteLine("your sum is{0}", no1 + no2 + no3);
            }

        }
    }
}

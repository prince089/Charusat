using System;

namespace Q_12
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is very bad for child");
            Console.WriteLine("enter no1");
            int no1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter no2");
            int no2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter no3");
            int no3 = Convert.ToInt32(Console.ReadLine());

            if (no1 == no2)
            {
                Console.WriteLine("your sume is 0");
            }
            else if (no2 == no3)
            {
                Console.WriteLine("your sume is 0");
            }
            else if (no1 == no3)
            {
                Console.WriteLine("your sume is 0");
            }

            else {
                Console.WriteLine("total sum of three number  no1 {0} + no2{1} +  no3{2} is: ={3} ", no1, no2, no3, no1 + no2 + no3);
            }
        }
    }
}

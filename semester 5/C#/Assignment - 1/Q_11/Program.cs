using System;

namespace Q_11
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("really you want to do this");

            int no1 = Convert.ToInt32(Console.ReadLine());


            if (no1 > 17)
            {
                Console.WriteLine("pure diffrence bweetween number and 17 is {0}", Convert.ToDouble(no1 - 17));
            }
            else {
                Console.WriteLine("diffrence between number is  : {0}",no1-17);

            }
        }
    }
}

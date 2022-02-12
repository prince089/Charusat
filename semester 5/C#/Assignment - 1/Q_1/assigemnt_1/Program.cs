using System;

namespace assigemnt_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This is for calulate area of circle ");
            Console.WriteLine("enter value of reduse : ");
            int r = Convert.ToInt32(Console.ReadLine());
            double answer;
            answer = 3.14 * (r * r);

            Console.WriteLine("the area of circle is {0}",answer);

        }
    }
}

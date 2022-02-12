using System;

namespace Q_31
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("nothing special dude");

            string s1 = Console.ReadLine();

            if (s1[0] == 'i' && s1[1] == 's')
            {
                Console.WriteLine("your string is =>>>>{0}",s1);

            }

            else
            {
                Console.WriteLine("your string now =>>>> is {0}",s1);
            }
        }
    }
}

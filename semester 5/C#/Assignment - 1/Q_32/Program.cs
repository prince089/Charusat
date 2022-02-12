using System;

namespace Q_32
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("f***** string yaar");

            Console.WriteLine("enetr your charater");
            char s1 = Convert.ToChar(Console.ReadLine());

            if (s1 == 'a' || s1 == 'A' || s1 == 'e' || s1 == 'E' || s1 == 'i' || s1 == 'I' || s1 == 'O' || s1 == 'o' || s1 == 'u' || s1 == 'u') {
                Console.WriteLine("your char is vovel");
            }
            else {
                Console.WriteLine("your char is not a vovel");
            }
        }
    }
}

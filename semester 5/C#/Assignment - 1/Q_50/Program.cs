using System;
using System.Linq;

namespace Q_50
{
    class Program
    {
        static void Main(string[] args)
        {
            var list = new System.Collections.Generic.List<string> { "abc","xyz","pqr"};

            

            if (list.Count != list.Distinct().Count())
            {
                Console.WriteLine("duplicate exist");
            }
            else
            {
                Console.WriteLine("duplicate  not exist");

            }
        }
    }
}

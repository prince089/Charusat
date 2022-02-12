using System;

namespace Q_37
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> list = new List<int> { 2, 4, 6, 2 };


            var product = list.Aggregate((total, next) => total * next);
        }
    }
}

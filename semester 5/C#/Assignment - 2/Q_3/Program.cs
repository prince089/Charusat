using System;

namespace Q_3
{
    class main
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }

    class Shape : location
    {
        public string tostring() {
            string s1 = "";
            return s1;
        }

        public double area()
        {
            double no1 = 0;
            return no1;
        }

        public double perimiter()
        {
            double no2 = 0;
            return no2;
        }
    }

    class rectengle:Shape
    {
        double side_1 = 2;
        double side_2 = 3;

    }

    class circle:Shape
    {
        double radious = 22;
    }

    class location
    {
        double x;
        double y;
    }
}

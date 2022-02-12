using System;

namespace Q_43
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] color_1 = { "red", "blue", "yellow" };
            string[] color_2 = { "red", "orange", "green" };

            for(int i=0; i < (color_1.Length); i++)
            {
                int temp = 1;
                for (int j = 0; j < (color_2.Length); j++)
                {
                    if(color_1[i] == color_2[j])
                    {
                        temp = 0;
                    }
                }
                if (temp == 1)
                {
                    Console.WriteLine("you best color {0}",color_1[i]);
                }

            }

        }
    }
}

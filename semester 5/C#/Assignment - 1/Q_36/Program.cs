using System;

namespace Q_36
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("not more list yarr ):");
            int[] arr = { -1, 2, 3, -4 };
            for(int i = 0; i < (arr.Length); i++)
            {
                if(arr[i] > 0)
                {
                    Console.WriteLine(" =>>{0}",arr[i]);
                }
            }

        }
    }
}

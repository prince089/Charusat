using System;

namespace Q_45
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 9, 6, 7, 5, 9 };

            
            Array.Sort(arr);

            
            

            
            foreach (int value in arr)
            {
                Console.Write(value + " ");
            }
        }
    }
}

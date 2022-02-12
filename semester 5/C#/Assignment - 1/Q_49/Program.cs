using System;

namespace Q_49
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("not bad not abd now you");

            int[] arr = new int[] { 1, 9, 6, 7, 5, 9 };


            Array.Sort(arr);
            Console.WriteLine("your max element from list is : {0}", arr[(arr.Length - 1)]);
            Console.WriteLine("your min element from list is : {0}", arr[0]);
        }
    }
}

using System;

namespace Q_33
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("agin sum dude");
            Console.WriteLine("enter how much number you want");
            int no = int.Parse(Console.ReadLine());
            int ans = 0;
            for(int i = 0 ; i< no; i++)
            {
                Console.WriteLine("enetr number for sum ");
                int temp = int.Parse(Console.ReadLine());
                ans += temp;
            }
            Console.WriteLine("sum of your number is {0}", ans);
        }
    }
}

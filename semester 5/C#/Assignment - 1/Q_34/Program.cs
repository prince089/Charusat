using System;

namespace Q_34
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("lmao array");
            int[] arr = { 1, 2, 3, 4 };
            Console.WriteLine("enter your number");
            int no = int.Parse(Console.ReadLine());
            int temp = 0; 
            for(int i=0; i<4; i++)
            {
                if(no == arr[i])
                {
                    temp = 1;
                }
            }
            if(temp == 1)
            {
                Console.WriteLine("your number matched ");

            }
            else
            {
                Console.WriteLine("your number  not matched ");
            }
            
        }
    }
}

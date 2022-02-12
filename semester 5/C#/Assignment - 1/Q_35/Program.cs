using System;

namespace Q_35
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("wtf is arry bro");
            char[] arr = { 'a', 'b', 'c' };
            string s1= " ";
            
            for(int i =0; i < (arr.Length); i++)
            {
                s1 = s1 + arr[i];
            }
            Console.WriteLine("your string is : {0}" ,s1);
        }
    }
}

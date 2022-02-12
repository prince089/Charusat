using System;

namespace Q_22
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("somthing with complex");
            Console.WriteLine("enetr waht is your max number");
            int no = int.Parse(Console.ReadLine());
            int answer = 0;
            for (int i = 0; i <= no; i++) {
                answer += i;
            }
            Console.WriteLine("your sum is : {0}",answer);
        }
    }
}

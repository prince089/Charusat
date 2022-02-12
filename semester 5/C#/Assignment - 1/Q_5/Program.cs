using System;

namespace Q_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("this is for calylate somr equestion");
            Console.WriteLine("enter one numnber ");
            int n = Convert.ToInt32(Console.ReadLine());
            int answer = 0;
            for(int i = 0;i < n; i++){
                int temp = n;
                for (int j = 0; j <i; j++)
                {

                    temp = temp  * n;
                    Console.WriteLine("joke {0}", temp);

                }
                answer = answer + temp; 
               

            }
            Console.WriteLine("answer of this type of joke is {0}", answer);
        }
    }
}

using System;

namespace Q_48
{
    class Program
    {
        static bool isNumber(string s)
        {
            for (int i = 0; i < s.Length; i++)
                if (char.IsDigit(s[i]) == false)
                    return false;

            return true;
        }

      
        static public void Main(String[] args)
        {

            
            string str = "6790";

           
            if (isNumber(str))
                Console.WriteLine("Integer");

           
            else
                Console.WriteLine("String");
        }
    }

}


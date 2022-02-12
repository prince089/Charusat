using System;

namespace Q_40
{
    class Program
    {
        static void Main(string[] args)
        {
            string _inputstr, _reversestr = string.Empty;
            Console.Write("Enter a string : ");
            _inputstr = Console.ReadLine();
            if (_inputstr != null)
            {
                for (int i = _inputstr.Length - 1; i >= 0; i--)
                {
                    _reversestr += _inputstr[i].ToString();
                }
                Console.WriteLine("String is  Input = {0} and Output= {1}", _inputstr, _reversestr);
            }
        }
    }
}


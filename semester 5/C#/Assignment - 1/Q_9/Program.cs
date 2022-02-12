using System;

namespace Q_9
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Console.WriteLine("calaculate day");
            Console.WriteLine("enetr start date");
            DateTime SatrtDate = Convert.ToDateTime(Console.ReadLine());
            Console.WriteLine("enetr end date");
            DateTime enddate = Convert.ToDateTime(Console.ReadLine());

            Console.WriteLine("total date from your number is : {0}", (enddate.Date - SatrtDate.Date).TotalDays);*/
            DateTime start = new DateTime(2010, 6, 14);
            DateTime end = new DateTime(2016, 08, 14);

            TimeSpan difference = end - start; //create TimeSpan object

            Console.WriteLine("Difference in days: " + difference.Days); //Extract days, write to Console.

        }
    }
}

using System;

namespace assigement_3
{
    class Persone
    {

        //int age;
        //Console.WriteLine("I’m going to class");
        /*  Persone()
          {
              Console.WriteLine("I’m going to class");
          }*/

        public int age { set; get; }
        public void Showage()
        {
            Console.WriteLine(" age is {0}", age);
        }
    }

    class Student : Persone
    {
        public void Gotoclass()
        {
            Console.WriteLine("I’m going to class");

        }



    }

    class Teacher : Persone
    {
        string subject = "adnf";
        public void Explain()
        {
            Console.WriteLine("Explanation begin of {0} ", subject);


        }

    }

    class Student_teacher_test
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Student obj_student = new Student();
            obj_student.age = 21;
            obj_student.Gotoclass();
            obj_student.Showage();
            Teacher obj_techer = new Teacher();
            obj_techer.age = 30;
            obj_techer.Explain();
            obj_techer.Showage();




        }
    }


}

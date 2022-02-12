using System;

namespace Q_2
{
    class Test
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            PhotoAlbum p1 = new PhotoAlbum();
            //p1.GetNumber();
            Console.WriteLine(p1.GetNumber());
            Bigphotoalbum b1 = new Bigphotoalbum();
            //b1.GetNumber();
            Console.WriteLine(b1.GetNumber());
            Bigphotoalbum b2 = new Bigphotoalbum(24);
            Console.WriteLine(b2.GetNumber());

        }
    }

    class PhotoAlbum:Test
    {
        int numberofpage;
        public PhotoAlbum()
        {
            numberofpage = 16;
        }
        public PhotoAlbum(int no1)
        {
            numberofpage = no1;
        }


        public int GetNumber()
        {
            return numberofpage;
        }
    }
    class Bigphotoalbum:Test
    {
        int numberofpage;
        public Bigphotoalbum()
        {
            numberofpage = 64;
        }
        public Bigphotoalbum(int no1)
        {
            numberofpage = no1;
        }
        public int GetNumber()
        {
            return numberofpage;
        }
    }
}

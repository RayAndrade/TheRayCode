using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var mirror = new HauntedMirror();
            var doll = new CursedDoll();
            var book = new DemonBook();

            mirror.SetNext(doll);
            doll.SetNext(book);

            Console.WriteLine("A thief approaches and touches the Haunted Mirror:\n");
            mirror.Curse("thief");

            Console.WriteLine("\nA curious child touches the Cursed Doll:\n");
            mirror.Curse("child");

            Console.WriteLine("\nAn unsuspecting visitor touches an artifact:\n");
            mirror.Curse("visitor");

        }
    }
}
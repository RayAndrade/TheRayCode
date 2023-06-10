using System;

namespace Show
{
    public class Doll : IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a doll...");
        }
    }
}
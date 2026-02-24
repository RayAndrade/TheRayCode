using System;

namespace Show
{
    public class Listener: IListener
    {
        private string name;

        public Listener(string name)
        {
            this.name = name;
        }
        public void HearJoke(string joke)
        {
            Console.WriteLine($"{name} heard a joke: {joke}");
        }
    }
}
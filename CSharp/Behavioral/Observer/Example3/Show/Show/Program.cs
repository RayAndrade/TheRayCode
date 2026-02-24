namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            JokeTeller jokeTeller = new JokeTeller();
            Listener alice = new Listener("Alice");
            Listener bob = new Listener("Bob");

            jokeTeller.Subscribe(alice);
            jokeTeller.Subscribe(bob);

            jokeTeller.TellJoke("Why did the scarecrow win an award? Because he was outstanding in his field!");

            jokeTeller.Unsubscribe(bob);

            jokeTeller.TellJoke("I'm reading a book on anti-gravity. It's impossible to put down!");
        }
    }
}
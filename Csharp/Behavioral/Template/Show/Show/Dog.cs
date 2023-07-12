using System;

namespace Show
{
    public class Dog: AbstractPet
    {
        public override void WakeUp()
        {
            Console.WriteLine("Dog wakes up and wags its tail.");
        }

        public override void Eat()
        {
            Console.WriteLine("Dog eats its food happily.");
        }

        public override void Play()
        {
            Console.WriteLine("Dog fetches the ball.");
        }

        public override void Sleep()
        {
            Console.WriteLine("Dog sleeps in its comfy bed.");
        }
    }
}
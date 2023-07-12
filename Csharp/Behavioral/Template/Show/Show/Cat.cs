using System;

namespace Show
{
    public class Cat: AbstractPet
    {
        public override void WakeUp()
        {
            Console.WriteLine("Cat wakes up and stretches.");
        }

        public override void Eat()
        {
            Console.WriteLine("Cat eats its food with pleasure.");
        }

        public override void Play()
        {
            Console.WriteLine("Cat chases a laser pointer.");
        }

        public override void Sleep()
        {
            Console.WriteLine("Cat curls up on the sofa and sleeps.");
        }
    }
}
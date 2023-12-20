using System;

namespace Show
{
    public class CursedDoll: Artifact
    {
        public override void Curse(string victim)
        {
            if (victim == "child")
            {
                Console.WriteLine($"The Cursed Doll's eyes glow red as it stares at {victim}...");
            }
            else
            {
                Console.WriteLine("The Cursed Doll's spirit whispers, passing the curse...");
                NextArtifact?.Curse(victim);
            }
        }

    }
}
using System;

namespace Show
{
    public class HauntedMirror: Artifact
    {
        public override void Curse(string victim)
        {
            if (victim == "thief")
            {
                Console.WriteLine("The Haunted Mirror shows the thief their doomed future...");
            }
            else
            {
                Console.WriteLine("The Haunted Mirror's spirit stirs, passing the curse...");
                NextArtifact?.Curse(victim);
            }
        }
    }
}
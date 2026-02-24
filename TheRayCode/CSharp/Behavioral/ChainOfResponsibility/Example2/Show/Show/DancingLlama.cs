using System;

namespace Show
{
    public class DancingLlama: Animal
    {
        public override void PerformAct(string trick)
        {
            Console.WriteLine($"🦙 Llama does the moonwalk, then breakdances. Crowd goes wild!");
        }
    }
}
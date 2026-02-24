using System;

namespace Show
{
    public class FireballSpell: IMagicSpell
    {
        public void CastSpell()
        {
            Console.WriteLine("FireballSpell: A dazzling fireball zooms towards the target!");
        }
    }
}